#pragma once
#include <vector>
class Sorter
{
public:
	template <typename c>
	void swap(c array, unsigned int first_index, unsigned int second_index);

	//template <typename c>
	int index_of_minimum(std::vector<int> list, unsigned int start_index);

	Sorter();
	~Sorter();
};

