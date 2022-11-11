#include <iostream>
#include <string>
#include <cstdlib>

#include "practice.h"
#include "practice_source.h"
#include "string_utility.h"

using namespace std;

// declare variables
practice practices[20] = {
	practice(1, "Write a program that prints \"Hello World\" using formatting characters"),
	practice(2, "Write a program to calculate the sum of even numbers from 1 to n"),
	practice(3, "Write a program that receives n elements from the input and then counts the number of even and odd numbers."),
	practice(4, "Write a program that checks whether an input number is complete"),
	practice(5, "Write a program to print the multiplication table of numbers 1 to 10"),
	practice(6, "Write a program that receives a digit between 0 and 9 from the input and then prints its literal equivalent (Using switch)"),
	practice(7, "Write a program that prints the following numbers. \n 1\n 2   2\n 3   3  3\n 4 4 4  4"),
	practice(8, "Write a program that reads two numbers y and X from the input and then calculates and prints the greatest divisor between them"),
	practice(9, "Write a program that receives a number from the input and then calculates and prints its absolute value"),
	practice(10, "Write a program that takes a number between 1 and 7 from the input and prints the corresponding day. (Using switch-case)"),
	practice(11, "Write a program that calculates the product of n numbers obtained from the input and then the product of its positive numbers"),
	practice(12, "Write a program that receives a number from the input and then calculate its factorial"),
	practice(13, "Write a program that receives a number from the input and then calculates the average of the numbers from 1 to that number"),
	practice(14, "Write a program that receives a number from the input and then moves it to base 2"),
	practice(15, "Write a program that receives a number from the input, then determines whether the number is prime or not and displays it with an appropriate message."),
	practice(16, "Write a program that displays the first n terms of the Fibonacci series."),
	practice(17, "Write a program that calculates the factorial of an integer n (Using function)"),
	practice(18, "Write a program that calculates the sum of natural numbers from 1 to n (Using function)"),
	practice(19, "Write a program that searches element x in an array of length n"),
	practice(20, "Write a program that receives the names of n students from the input and then sorts them")
};

int selected_practice_id;
string wanna_continue;

// function declaration
void setup();
void clearConsole();
void run();

int main()
{
	cout << "Welcome to cpp basics workshop" << endl << endl;

	while (true)
	{
		try
		{
			// setup
			setup();

			// clear console
			clearConsole();

			// run practice
			run();

			// check wanna continue or not
			cout << "Do you want try again? (Y or N): ";
			cin >> wanna_continue;
			wanna_continue = string_utility::toLower(wanna_continue);
			if (wanna_continue == "y" || wanna_continue == "yes")
			{
				// clear console
				clearConsole();
				continue;
			}
			else
				break;
		}
		catch (const std::exception&)
		{
			system("pause");
		}
	}

	system("pause");
	return 0;
}

// function definition
void setup()
{
	cout << "Please choice a practice id to run: " << endl;
	for (practice practice : practices)
	{
		cout << practice.get_id() << ": " << practice.get_question() << endl;
	}
	cin >> selected_practice_id;
}

void run()
{
	practice_source(selected_practice_id).run();
}

void clearConsole()
{
	system("cls");
}