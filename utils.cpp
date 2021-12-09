#include <iostream>
#include <vector>

namespace snl {
    template<class T>
    void print(T &object) {
        std::cout << object;
    }

    void printLine() {
        std::cout << std::endl;
    }

    template<class T>
    void printLine(T &object) {
        std::cout << object << std::endl;
    }

    template<class T>
    std::ostream& operator<<(std::ostream &out, std::vector<T> &vec) {
        out << "[";
        if (!vec.empty()) {
            out << vec[0];
            for (int i = 1; i < vec.size(); i++) {
                out << ", " << vec[i];
            }
        }
        out << "]";
        return out;
    }
}