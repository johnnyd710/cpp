/**
 * test MyStackArray data structure that keeps track of its own length
 *
 */

#include <cstdio>
#include "linkedlist.h"

void test_add() {
    MyLinkedList<int> mylinkedlist;
    mylinkedlist.push(1);
    mylinkedlist.push(5);
    mylinkedlist.push(9);
    printf("result: %i \n", mylinkedlist.pop());
    printf("expected: 9\n");
    printf("result: %i \n", mylinkedlist.pop());
    printf("expected: 5\n");
    printf("result: %i \n", mylinkedlist.pop());
    printf("expected: 1\n");
}

int main( ) {
    printf("running tests...\n");
    test_add();
    return 0;
}