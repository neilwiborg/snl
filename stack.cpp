#include <stack>
#include "stack.h"

namespace snl {
    template<class T>
    T& stack<T>::peek() {
        return st.top();
    }

    template<class T>
    T& stack<T>::top() {
        return peek();
    }

    template<class T>
    T stack<T>::pop() {
        T obj = st.top();
        st.pop();
        return obj;
    }

    template<class T>
    bool stack<T>::isEmpty() {
        return st.empty();
    }

    template<class T>
    bool stack<T>::empty() {
        return isEmpty();
    }

    template<class T>
    void stack<T>::push(T& object) {
        st.push(object);
    }
}