#pragma once
#include <vector>

class QuickSort
{
public:
	int partition(std::vector<int>& input, unsigned int p, unsigned int r);
	QuickSort();
	~QuickSort();

private:
	void swap(std::vector<int>& input, unsigned int first_index, unsigned int second_index);
};

