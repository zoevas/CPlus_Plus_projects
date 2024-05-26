#include "SelectionSort.h"
#include "SortingAlgorithms.h"

int main() {
	std::vector<int> array = { 64, 55, 22, 3 };

	SelectionSort<int> s = SelectionSort<int>(array);

	s.sort();
	std::cout << s;

	
	BubbleSort bubblesort;
	SortContext context;
	context.setStrategy(&bubblesort);
	context.executeStrategy(array);

	std::cout << "Bubblesort: \n";
	for (const auto& elem : array) {
		std::cout << elem << " ";
	}

}