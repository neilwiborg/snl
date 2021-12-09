#include "algorithms.h"
#include <vector>

namespace snl {

    namespace { // private members of snl
        template<class T>
        int binarySearchHelper(const std::vector<T> &collection,
            int left, int right, const T &value) {
                if (right < left) {
                    return -1;
                }
                int mid = (left + right) / 2; // Should this be calculated the weird way?
                if (collection[mid] == value) {
                    return mid;
                }
                if (collection[mid] > value) {
                    return binarySearchHelper<T>(collection, left, mid - 1, value);
                }
                return binarySearchHelper<T>(collection, mid + 1, right, value);
        }
    }

    template<class T>
    void swap(T &a, T &b) { // would move be useful here?
        T temp = a;
        a = b;
        b = temp;
    }

    template<class T>
    int linearSearch(const std::vector<T> &collection, const T &value) {
        for (int i = 0; i < collection.size(); i++) {
            if (collection[i] == value) {
                return i;
            }
        }
        return -1;
    }

    template<class T>
    int binarySearch(const std::vector<T> &collection, const T &value) {
        return binarySearchHelper<T>(collection, 0, collection.size() - 1, value);
    }

    template<class T>
    void selectionSort(std::vector<T> &collection) {
        for (int i = 0; i < collection.size() - 1; i++) {
            for (int j = 1; j < collection.size(); j++) {
                // if ()
            }
        }
    }
}