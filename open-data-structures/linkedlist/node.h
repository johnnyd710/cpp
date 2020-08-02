#ifndef NODE_H
#define NODE_H

/*
author: john dimatteo
created on: 8/02/2020
desc:
a linked list data structure
Developed from: http://opendatastructures.org/ods-cpp/3_1_Singly_Linked_List.html
*/

template <class T>

class Node {
    public:
        /* contents at node */
        T x;
        /* pointer to next node in list */
        Node *next;
        Node(T x0) {
            x = x0;
            next = NULL;
        }
};

#endif
