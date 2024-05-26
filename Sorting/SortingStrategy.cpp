#include <iostream>
#include <vector>
#include "SortingStrategy.h"
#include "SortingAlgorithms.h"

//https://www.geeksforgeeks.org/strategy-method-design-pattern-c-design-patterns/

void BubbleSort::sort(std::vector<int>& arr)  {
		bool swapped;
		int n = arr.size();
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (arr[j] > arr[j+1]) {
					std::swap(arr[j], arr[j+1]);
					swapped = true;
				}
			}

			if (swapped == false) break;
		}
}


void QuickSort::sort(std::vector<int>& arr)  {
	
}