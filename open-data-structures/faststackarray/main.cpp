/**
 * test myfaststackarray data structure that keeps track of its own length
 *
 */

#include <cstdio>
#include "faststackarray.h"

void test_add() {
    MyFastStackArray<int> myfaststackarray;
    myfaststackarray.add(0, 1);
    myfaststackarray.add(1, 2);
    myfaststackarray.add(2, 3);
    printf("result: %i \n", myfaststackarray.get(0));
    printf("expected: 1\n");
    printf("result: %i \n", myfaststackarray.get(1));
    printf("expected: 2\n");
    printf("result: %i \n", myfaststackarray.get(2));
    printf("expected: 3\n");
}

void test_remove() {
    MyFastStackArray<int> myfaststackarray;
    myfaststackarray.add(0,1);
    myfaststackarray.add(1,2);
    myfaststackarray.add(2,3);
    printf("result: %i \n", myfaststackarray.remove(1));
    printf("expected: 2\n");
    printf("result: %i \n", myfaststackarray.size());
    printf("expected: 2\n");
}

void test_push_pop() {
    MyFastStackArray<int> myfaststackarray;
    myfaststackarray.push(1);
    myfaststackarray.push(2);
    myfaststackarray.push(3);
    printf("result: %i \n", myfaststackarray.pop());
    printf("expected: 3\n");
    printf("result: %i \n", myfaststackarray.pop());
    printf("expected: 2\n");
}

int main( ) {
    printf("running tests...\n");
    test_add();
    printf("testing remove ...\n");
    test_remove();
    printf("testing push pop ...\n");
    test_push_pop();
    return 0;
}