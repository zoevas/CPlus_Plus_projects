#pragma once

#include "SortingStrategy.h"

class BubbleSort : public SortingStrategy {
public:
    void sort(std::vector<int>& arr) override;
};

class QuickSort : public SortingStrategy {
public:
    void sort(std::vector<int>& arr) override;
};