#include <iostream>
#include <vector>
#include "sorter.hpp"
#include "strategies.hpp"

void print(const std::vector<int>& data) {
    for (int x : data) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> original = { 5, 2, 9, 1, 5, 6 };

    BubbleSortStrategy bubble;
    QuickSortStrategy quick;
    StdSortStrategy stdSort;
    InsertionSortStrategy insertion;

    {
        std::vector<int> data = original;
        Sorter sorter(&bubble);
        sorter.sortData(data);
        std::cout << "Bubble Sort:     "; print(data);
    }

    {
        std::vector<int> data = original;
        Sorter sorter(&quick);
        sorter.sortData(data);
        std::cout << "Quick Sort:      "; print(data);
    }

    {
        std::vector<int> data = original;
        Sorter sorter(&stdSort);
        sorter.sortData(data);
        std::cout << "std::sort:       "; print(data);
    }

    {
        std::vector<int> data = original;
        Sorter sorter(&insertion);
        sorter.sortData(data);
        std::cout << "Insertion Sort:  "; print(data);
    }

    return 0;
}
