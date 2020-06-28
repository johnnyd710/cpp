/**
 * test MyStackArray data structure that keeps track of its own length
 *
 */

#include <cstdio>
#include "stackarray.h"

void test_add() {
    MyStackArray<int> mystackarray;
    mystackarray.add(0, 1);
    mystackarray.add(1, 2);
    mystackarray.add(2, 3);
    printf("result: %i \n", mystackarray.get(0));
    printf("expected: 1\n");
    printf("result: %i \n", mystackarray.get(1));
    printf("expected: 2\n");
    printf("result: %i \n", mystackarray.get(2));
    printf("expected: 3\n");
}

void test_remove() {
    MyStackArray<int> mystackarray;
    mystackarray.add(0,1);
    mystackarray.add(1,2);
    mystackarray.add(2,3);
    printf("result: %i \n", mystackarray.remove(1));
    printf("expected: 2\n");
    printf("result: %i \n", mystackarray.size());
    printf("expected: 2\n");
}

int main( ) {
    printf("running tests...\n");
    test_add();
    test_remove();
    return 0;
}