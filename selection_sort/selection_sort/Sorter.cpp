#include "Sorter.h"

//template <typename c>
void Sorter::swap(std::vector<int>& input, unsigned int first_index, unsigned int second_index)
{
	int temp = input[first_index];
	input[first_index] = input[second_index];
	input[second_index] = temp;
}

//template <typename c>
int Sorter::index_of_minimum(std::vector<int> list, unsigned int start_index)
{
	auto min_val = list[start_index];
	auto min_index = start_index;

	for (auto i = start_index + 1; i < list.size(); ++i)
	{
		if (list[i] < min_val)
		{
			min_val = list[i];
			min_index = i;
		}
	}

	return min_index;
}

void Sorter::sort(std::vector<int>& input)
{
	auto temp = 0;

	for (auto i = 0; i < input.size(); ++i)
	{
		temp = index_of_minimum(input, i);
		swap(input, i, temp);
	}
}

Sorter::Sorter()
{
}


Sorter::~Sorter()
{
}
