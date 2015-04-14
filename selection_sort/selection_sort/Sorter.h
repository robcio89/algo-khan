#pragma once
#include <vector>
class Sorter
{
public:
	//template <typename c>
	void swap(std::vector<int>& input, unsigned int first_index, unsigned int second_index);

	//template <typename c>
	int index_of_minimum(std::vector<int> input, unsigned int start_index);

	void sort(std::vector<int>& input);

	Sorter();
	~Sorter();
};

