#include "../stack.h"
#include <cassert>
#include <iostream>

bool test1() {
    snl::stack<int> s1;
    s1.push(10);
    s1.push(15);
    s1.pop();
    return (s1.pop() == 10);
}

int main() {
    assert(test1);
    std::cout << "this is a test" << std::endl;

    return 0;
}
