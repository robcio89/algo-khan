#include "Palindrome.h"

char Palindrome::first_character(const std::string& input)
{
	if (input.length() != 0)
		return *(input.begin());
}

char Palindrome::last_character(const std::string& input)
{
	if (input.length() != 0)
		return input.back();
}

std::string Palindrome::middle_character(std::string& input)
{
	int i = input.length();

	if (i > 1)
		return input.substr(1, i-2);
	return input;
}

bool Palindrome::check_palindrome(std::string& input)
{
	if (input.length() <= 1)
		return true;
	else
	{
		if (first_character(input) == last_character(input))
			return check_palindrome(middle_character(input));
		else
			return false;
	}
}

Palindrome::Palindrome()
{
}


Palindrome::~Palindrome()
{
}
