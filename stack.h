#include <stack>
#include <iostream>

#ifndef STACK_H
#define STACK_H

namespace snl {
    template<class T>
    class stack {
        public:
        template<class T>
        T& peek();

        template<class T>
        T top();

        template<class T>
        T pop();

        bool isEmpty();

        bool empty();

        template<class T>
        void push(T& object);

        private:
        std::stack<T> st;
    };
}

#include "stack.cpp"

#endif // STACK_H