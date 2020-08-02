#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

/*
author: john dimatteo
created on: 8/02/2020
desc:
a linked list data structure
Developed from: http://opendatastructures.org/ods-cpp/3_1_Singly_Linked_List.html
*/

template <class T>

class MyLinkedList {
    public:
        Node<T> *head;
        Node<T> *tail;
        int n;
        T push(T x) {
            Node<T> *u = new Node<T>(x);
            u->next = head;
            head = u;
            if (n == 0) 
                tail = u;
            n++;
            return x;
        }

        T pop() {
            if ( n == 0 ) return NULL;
            T x = head->x;
            Node<T> *u = head;
            head = head->next;
            // garbage collection!
            delete u;
            if (--n == 0) tail = NULL;
            return x;
        }

        T remove() {
            return pop();
        }

        bool add(T x) {
            Node<T> *u = new Node<T>(x);
            if (n == 0) {
                head = u;
            } else {
                tail->next = u;
            }
            tail = u;
            n++;
            return true;
        }
};

#endif
