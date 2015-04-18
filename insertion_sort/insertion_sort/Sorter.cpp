#include "Sorter.h"

void Sorter::insert(std::vector<int>& input, unsigned int right_index, int value)
{
	auto i = 0;
	for (i = right_index; i >= 0 && input[i] > value; i--)
	{
		input[i + 1] = input[i];
	}
	input[i + 1] = value;
}

void Sorter::insertion_sort(std::vector<int>& input)
{
	for (auto i = 0; i < input.size(); ++i)
	{
		insert(input, i - 1, input[i]);
	}
}

Sorter::Sorter()
{
}


Sorter::~Sorter()
{
}
