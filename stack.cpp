#include <stack>
#include "stack.h"

namespace snl {
    template<class T>
    T& stack<T>::peek<T>() {
        return st.top();
    }

    template<class T>
    T stack<T>::top() {
        return peek();
    }

    template<class T>
    T pop() {
        T obj = st.top();
        st.pop();
        return obj;
    }

    bool isEmpty() {
        return st.empty();
    }

    bool empty() {
        return isEmpty();
    }

    template<class T>
    void push(T& object) {
        st.push(object);
    }
}