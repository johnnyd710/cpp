/**
 * test myfaststackarray data structure that keeps track of its own length
 *
 */

#include <cstdio>
#include "queuearray.h"

void test_queue() {
    MyQueueArray<int> myqueuearray;
    myqueuearray.add(4);
    myqueuearray.add(6);
    myqueuearray.add(10);
    printf("result: %i \n", myqueuearray.remove());
    printf("expected: 4\n");
    printf("result: %i \n", myqueuearray.remove());
    printf("expected: 6\n");
    printf("result: %i \n", myqueuearray.remove());
    printf("expected: 10\n");
}

int main( ) {
    printf("running tests...\n");
    test_queue();
    return 0;
}