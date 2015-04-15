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

Sorter::Sorter()
{
}


Sorter::~Sorter()
{
}
