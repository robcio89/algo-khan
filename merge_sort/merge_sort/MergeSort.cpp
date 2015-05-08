#include "MergeSort.h"

void MergeSort::merge(std::vector<int>& vec, int p, int q, int r)
{
	std::vector<int> lowHalf{};
	std::vector<int> highHalf{};

	int k = p;
	int i, j;

	for (i = 0; k <= q; ++i, ++k)
	{
		lowHalf[i] = vec[k];
	}

	for (j = 0; k <= r; ++j, ++k)
	{
		highHalf[j] = vec[k];
	}

	k = p;

	i = 0;
	j = 0;

	// Repeatedly compare the lowest untaken element in
	//  lowHalf with the lowest untaken element in highHalf
	//  and copy the lower of the two back into array

	while (i < lowHalf.size() && j < highHalf.size())
	{
		if (lowHalf[i] < highHalf[j])
		{
			vec[k] = lowHalf[i];
			++i;
		}
		else
		{
			vec[k] = highHalf[j];
			++j;
		}
		++k;
	}

	// Once one of lowHalf and highHalf has been fully copied
	//  back into array, copy the remaining elements from the
	//  other temporary array back into the array

	while (i < lowHalf.size())
	{
		vec[k] = lowHalf[i];
		++i;
		++k;
	}

	while (i < highHalf.size())
	{
		vec[k] = highHalf[j];
		++j;
		++k;
	}

}

MergeSort::MergeSort()
{
}


MergeSort::~MergeSort()
{
}
