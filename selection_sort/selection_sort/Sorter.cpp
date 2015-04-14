#include "Sorter.h"

template <typename c>
void Sorter::swap(c array, unsigned int first_index, unsigned int second_index)
{
	int temp = array[first_index];
	array[first_index] = array[second_index];
	array[second_index] = temp;
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

Sorter::Sorter()
{
}


Sorter::~Sorter()
{
}
