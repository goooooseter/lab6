#pragma once
#include "strategies.hpp"

class Sorter {
    SortingStrategy* strategy;
public:
    Sorter(SortingStrategy* strategy) : strategy(strategy) {}
    void sortData(std::vector<int>& data) {
        strategy->sort(data);
    }
};