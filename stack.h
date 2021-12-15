#include <stack>
#include <iostream>

#ifndef STACK_H
#define STACK_H

namespace snl {
    template<class T>
    class stack {
        public:
        T& peek();

        T& top();

        T pop();

        bool isEmpty();

        bool empty();

        void push(T& object);

        private:
        std::stack<T> st;
    };
}

#include "stack.cpp"

#endif // STACK_H