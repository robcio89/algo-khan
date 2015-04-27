#pragma once
#include <string>

class Palindrome
{
public:
	char first_character(const std::string& input);
	char last_character(const std::string& input);

	// Returns the string that results from removing the first
	//  and last characters from str
	std::string middle_character(std::string& input);

	bool check_palindrome(std::string& input);

	Palindrome();
	~Palindrome();
};

