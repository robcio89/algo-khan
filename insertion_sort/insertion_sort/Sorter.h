#pragma once
#include <vector>

class Sorter
{
public:

	void insert(std::vector<int>& input, unsigned int right_index, int value);
	void insertion_sort(std::vector<int>& input);
	Sorter();
	~Sorter();
};

