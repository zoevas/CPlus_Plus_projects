#pragma once
#include <iostream>
#include <vector>

template <class T>
class SelectionSort {
private: 
	std::vector<T> data;
public:
	SelectionSort(std::vector<T> array) :data(array) {}
	void sort() {
		size_t n = data.size();
		for (int i = 0; i < n - 1; ++i) {
			int min_index = i;
			for (int j = i+1; j < n; ++j ) {
				if (data[j] < data[min_index]) {
					min_index = j;
				}
			}

			if (min_index != i) {
				mySwap(data[i], data[min_index]);
			}
		
		}
	}


	void mySwap(T& a, T& b) {
		int tmp{ std::move(a) };
		a = std::move(b);
		b = std::move(tmp);
	
	}
	template <class U>
	friend std::ostream& operator<< (std::ostream& o, const SelectionSort<U>& array);



};

template <class U>
	std::ostream& operator<< (std::ostream& o, const SelectionSort<U>& array) {
		o << "\nArray is: ";
		for (const auto& elem : array.data) {
			o << elem << " ";
		}
		o << std::endl;
		return o;
	}