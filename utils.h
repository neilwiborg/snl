#include <vector>
#include <iostream>

#ifndef UTILS_H
#define UTILS_H

namespace snl {
    template<class T>
    void print(T &object);

    void printLine();

    template<class T>
    void printLine(T &object);

    template<class T>
    std::ostream& operator<<(std::ostream &out, std::vector<T> &vec);
}

#include "utils.cpp"

#endif // UTILS_H