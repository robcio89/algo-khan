#include "QuickSort.h"

int QuickSort::partition(std::vector<int>& input, unsigned int p, unsigned int r)
{
	return 1;
}

void QuickSort::swap(std::vector<int>& input, unsigned int first_index, unsigned int second_index)
{
	int temp = input[first_index];
	input[first_index] = input[second_index];
	input[second_index] = temp;
}

QuickSort::QuickSort()
{
}


QuickSort::~QuickSort()
{
}
