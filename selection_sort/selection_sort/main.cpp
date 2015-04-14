#include <iostream>
#include <array>
#include <list>
#include <vector>

template <typename c>
void swap(c array, unsigned int first_index, unsigned int second_index)
{
	int temp = array[first_index];
	array[first_index] = array[second_index];
	array[second_index] = temp;
}

template <typename c>
int index_of_minimum(c array, unsigned int start_index)
{
	auto min_val = array[start_index];
	auto min_index = start_index;

	for (const auto& i : array)
	{
		if (i < min_val)
		{
			min_val = i;
			min_index = i;
		}
	}

	return min_index;
}

int main()
{
	std::cout << "Hello!" << std::endl;
}