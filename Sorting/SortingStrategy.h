#pragma once
#ifndef SORTINGSTRATEGY_H
#define SORTINGSTRATEGY_H

#include <vector>

class SortingStrategy {
public:
    virtual void sort(std::vector<int>& arr) = 0;
    virtual ~SortingStrategy() = default;
};

//Create the context of the strategy design pattern
class SortContext {
private:
	SortingStrategy* strategy;

public:
	void setStrategy(SortingStrategy* strategy) {
		this->strategy = strategy;
	}
	void executeStrategy(std::vector<int>& arr) {
		strategy->sort(arr);
	}

};
#endif 