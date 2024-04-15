#include "SelectionSort.h"

int main() {
	std::vector<int> array = { 64, 55, 22, 3 };

	SelectionSort<int> s = SelectionSort<int>(array);

	s.sort();
	std::cout << s;
}