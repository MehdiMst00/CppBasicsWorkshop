#pragma once
#include <string>
using namespace std;

class practice
{
public:
	// Setters
	void set_id(const int id)
	{
		_id = id;
	}
	void set_question(const string& question)
	{
		_question = question;
	}

	// Getters
	int get_id() const
	{
		return _id;
	}
	string get_question()
	{
		return _question;
	}

	// Constructors
	practice(const int id, const string& question)
	{
		set_id(id);
		set_question(question);
	}
private:
	int _id;
	string _question;
};