#pragma once
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

class string_utility
{
public:
	static string toLower(string data)
	{
		std::transform(data.begin(), data.end(), data.begin(),
			[](unsigned char c)
			{
				return std::tolower(c);
			});
		return data;
	}
};