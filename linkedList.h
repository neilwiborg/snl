
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

namespace snl {
    template<class T>
    class linkedList {
        public:
            linkedList();

            ~linkedList();

            bool empty();

            bool isEmpty();

            void insert(T val);

            T pop();

            T& front();

            T& back();

            void push_front(T val);

            void push_back(T val);

            T pop_front();

            T pop_back();

        private:
        class Node<T> {
            public:
                T val;
                Node* forward;
                Node* backward;

                Node(val);
        }

        Node* head;
        Node* tail;
    };
}

#include "linkedList.cpp"

#endif // LINKEDLIST_H