/**
 * test myfaststackarray data structure that keeps track of its own length
 *
 */

#include <cstdio>
#include "randomqueue.h"
#include <time.h>       /* time */
#include <stdlib.h>     /* srand, rand */

void test_queue() {
    MyRandomQueue<int> myrandqueue;
    myrandqueue.add(4);
    myrandqueue.add(6);
    myrandqueue.add(10);
    myrandqueue.add(15);
    myrandqueue.add(25);
    printf("result: %i \n", myrandqueue.remove());
    printf("expected: random\n");
    printf("result: %i \n", myrandqueue.remove());
    printf("expected: random\n");
    printf("result: %i \n", myrandqueue.remove());
    printf("expected: random\n");
    printf("result: %i \n", myrandqueue.remove());
    printf("expected: random\n");
    printf("result: %i \n", myrandqueue.remove());
    printf("expected: random\n");
    printf("expected: adding...\n");
    myrandqueue.add(0);
    myrandqueue.add(1);
    myrandqueue.add(13);
    printf("result: %i \n", myrandqueue.remove());
    printf("expected: random\n");

}

int main( ) {
      /* initialize random seed: */
    srand (time(NULL));
    printf("running tests...\n");
    test_queue();
    return 0;
}