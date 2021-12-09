#include <vector>

#ifndef ALGORITHMS_H
#define ALGORITHMS_H

namespace snl {
    template<class T>
    void swap(T &a, T &b);

    template<class T>
    int linearSearch(const std::vector<T> &collection, const T &value);

    template<class T>
    int binarySearch(const std::vector<T> &collection, const T &value);

    template<class T>
    void selectionSort(std::vector<T> &collection);

    template<class T>
    void insertionSort(std::vector<T> &collection);

    template<class T>
    void bubbleSort(std::vector<T> &collection);
}

#include "algorithms.cpp"

#endif // ALGORITHMS_H