/**
 * test MyArray data structure that keeps track of its own length
 *
 */

#include <cstdio>
#include "array.h"

void test_assignment() {
    MyArray<int> myarray(10);
    myarray[0]= 1;
    myarray[1]= 10;
    myarray[2]= 100;
    printf("result: %i \n", myarray.length);
    printf("expected: 10\n");
}

void test_array_assignment() {
    MyArray<int> myarrayone(10);
    MyArray<int> myarraytwo(20);
    myarrayone[0]= 1;
    myarrayone[1]= 10;
    myarrayone[2]= 100;
    myarraytwo[0]= 7;
    myarrayone = myarraytwo;
    printf("result: %i \n", myarraytwo.length);
    printf("expected: 20");
}

void test_overload() {
    MyArray<int> myarray(10);
    myarray[0]= 1;
    myarray[1]= 10;
    myarray[2]= 100;
    myarray[11]= 1000;
    printf("result: %i \n", myarray.length);
    printf("expected: error \n");
}

int main( ) {
    printf("running tests...\n");
    test_assignment();
    test_array_assignment();
    test_overload();
    return 0;
}