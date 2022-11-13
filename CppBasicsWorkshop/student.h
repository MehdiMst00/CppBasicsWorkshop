#pragma once
#include <string>
using namespace std;
class student
{
public:
	static int count;
	string student_name;

	student() {}

	student(string name)
	{
		student_name = name;
		count++;
	}
};

