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

Palindrome::Palindrome()
{
}


Palindrome::~Palindrome()
{
}
