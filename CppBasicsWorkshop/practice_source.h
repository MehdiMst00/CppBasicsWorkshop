#pragma once
#include <iostream>
using namespace std;

class practice_source
{
public:
	void run()
	{
		switch (_practice_id)
		{
		case 1:
			practice_1();
			break;
		case 2:
			practice_2();
			break;
		case 3:
			practice_3();
			break;
		case 4:
			practice_4();
			break;
		case 5:
			practice_5();
			break;
		case 6:
			practice_6();
			break;
		case 7:
			practice_7();
			break;
		case 8:
			practice_8();
			break;
		case 9:
			practice_9();
			break;
		case 10:
			practice_10();
			break;
		case 11:
			practice_11();
			break;
		case 12:
			practice_12();
			break;
		case 13:
			practice_13();
			break;
		case 14:
			practice_14();
			break;
		case 15:
			practice_15();
			break;
		case 16:
			practice_16();
			break;
		case 17:
			practice_17();
			break;
		case 18:
			practice_18();
			break;
		case 19:
			practice_19();
			break;
		case 20:
			practice_20();
			break;
		default:
			cout << "Invalid practice id !!!" << endl;
		}
	}
	practice_source(int practice_id)
	{
		_practice_id = practice_id;
	}
private:
	int _practice_id;

	static void practice_1()
	{
		cout << "Hello World \n \n";
	}

	static void practice_2()
	{
		int number, sum = 0;
		cout << "Please enter a number: ";
		cin >> number;

		for (int i = 1; i <= number; i++)
		{
			if (i % 2 == 0)
			{
				sum += i;
			}
		}

		cout << "Sum: " << sum << endl;
	}

	static void practice_3()
	{
		int countOfNumber, even = 0, odd = 0;

		cout << "Please enter count of numbers: ";
		cin >> countOfNumber;
		int numbers[1000] = { 0 };

		for (int i = 0; i < countOfNumber; i++)
		{
			cin >> numbers[i];
		}

		for (const int i : numbers)
		{
			if (i != 0)
			{
				if (i % 2 == 0) {
					even++;
				}
				else
				{
					odd++;
				}
			}
		}

		cout << "Even: " << even << endl;
		cout << "Odd: " << odd << endl;
	}

	static void practice_4()
	{
		int number, i, sum = 0;

		cout << "Please enter a number: ";
		cin >> number;

		for (i = 1; i < number; i++)
		{
			if (number % i == 0)
			{
				sum = sum + i;
			}
		}

		if (sum == number)
		{
			cout << i << " is a perfect number" << endl;
		}
		else
		{
			cout << i << " is not a perfect number" << endl;
		}
	}

	static void practice_5()
	{
		cout << "Multiplication table of numbers 1 to 10" << endl;
		for (int i = 1; i <= 10; i++)
		{
			for (int j = 1; j <= 10; j++)
			{
				cout << j << "*" << i << "=" << i * j << " ";
			}
			cout << endl;
		}
	}

	static void practice_6()
	{
		int number;
		cout << "Please enter a number: ";
		cin >> number;

		if (number < 0 || number > 9) {
			cout << "The number must be between 0 and 9" << endl;
			return;
		}

		switch (number)
		{
		case 0:
			cout << "Zero";
			break;
		case 1:
			cout << "One";
			break;
		case 2:
			cout << "Two";
			break;
		case 3:
			cout << "Three";
			break;
		case 4:
			cout << "Four";
			break;
		case 5:
			cout << "Five";
			break;
		case 6:
			cout << "Six";
			break;
		case 7:
			cout << "Seven";
			break;
		case 8:
			cout << "Eight";
			break;
		case 9:
			cout << "Nine";
			break;
		}

		cout << endl;
	}

	static void practice_7()
	{
		// I don't know it's a correct way or not :)
		cout << "1\n2   2\n3   3  3\n4 4 4  4" << endl;
	}

	static void practice_8()
	{
		int number1, number2, result = NULL;
		cout << "Please enter first number: " << endl;
		cin >> number1;
		cout << "Please enter second number: " << endl;
		cin >> number2;

		for (int i = 1; i <= number1 && i <= number2; i++)
		{
			if (number1 % i == 0 && number2 % i == 0)
			{
				result = i;
			}
		}

		if (result != NULL)
		{
			cout << "Result : " << result << endl;
		}
		else
		{
			cout << "Error :(" << endl;
		}
	}

	static void practice_9()
	{
		int number;
		cout << "Please enter a number: ";
		cin >> number;

		if (number < 0)
		{
			number = (-1) * number;
		}

		cout << "Result: " << number << endl;
	}

	static void practice_10()
	{
		int day;
		cout << "Enter day: ";
		cin >> day;

		switch (day) {
		case 1:
			cout << "Saturday" << endl;
			break;
		case 2:
			cout << "Sunday" << endl;
			break;
		case 3:
			cout << "Monday" << endl;
			break;
		case 4:
			cout << "Tuesday" << endl;
			break;
		case 5:
			cout << "Wednesday" << endl;
			break;
		case 6:
			cout << "Thursday" << endl;
			break;
		case 7:
			cout << "Friday" << endl;
			break;
		default:
			cout << "A week has seven days !!!" << endl;
		}
	}

	static void practice_11()
	{
		int countOfNumber, multiplication = 1;

		cout << "Please enter count of numbers: ";
		cin >> countOfNumber;
		int numbers[1000] = { 0 };

		for (int i = 0; i < countOfNumber; i++)
		{
			cin >> numbers[i];
		}

		for (const int i : numbers)
		{
			if (i != 0 && i > 0)
			{
				multiplication *= i;
			}
		}

		cout << "Multiplication: " << multiplication << endl;
	}

	static void practice_12()
	{
		int number, factorial = 1;
		cout << "Please enter a number: ";
		cin >> number;

		for (int i = 1; i <= number; i++)
		{
			factorial *= i;
		}

		cout << "Factorial: " << factorial << endl;
	}

	static void practice_13()
	{
		int number, average;
		float sum = 0.0;

		cout << "Please enter a number: ";
		cin >> number;

		for (int i = 1; i <= number; i++)
		{
			sum += i;
		}

		average = sum / number;

		cout << "Average: " << average << endl;
	}

	static void practice_14()
	{
		//TODO: Implement 
	}

	static void practice_15()
	{
		int number;
		bool is_prime = true;

		cout << "Please enter a number: ";
		cin >> number;

		if (number == 0 || number == 1)
		{
			is_prime = false;
		}

		for (int i = 2; i <= number / 2; i++)
		{
			if (number % i == 0)
			{
				is_prime = false;
				break;
			}
		}

		if (is_prime)
		{
			cout << number << " is prime" << endl;
		}
		else
		{
			cout << number << " is not prime" << endl;
		}
	}

	static void practice_16()
	{
		int number, f1 = 0, f2 = 1, result = 0;

		cout << "Please enter the number: ";
		cin >> number;

		cout << "Fibonacci Result: ";
		for (int i = 1; i <= number; i++) {

			if (i == 1)
			{
				cout << f1 << ", ";
				continue;
			}

			if (i == 2)
			{
				cout << f2 << ", ";
				continue;
			}

			result = f1 + f2;
			f1 = f2;
			f2 = result;

			cout << result;

			if (i != number) {
				cout << ", ";
			}
		}

		cout << endl;
	}

	static void practice_17()
	{
		//TODO: Implement 
	}

	static void practice_18()
	{
		//TODO: Implement 
	}

	static void practice_19()
	{
		//TODO: Implement 
	}

	static void practice_20()
	{
		//TODO: Implement 
	}
};