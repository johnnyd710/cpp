/* 
Queue array data structure
date: 2020-07-25
author: john dimatteo
desc: implements a queue by simulating an infinite array using mod arthimetic
removes elements uniformly at random
*/

#ifndef RANDOMQUEUE_H
#define RANDOMQUEUE_H

#include "../arrays/array.h"

template <class T>

class MyRandomQueue {
    private:
        MyArray<T> a;
        int n; // to keep track of the # of elements in queue
        int j; // keeps track of the first element in the queue
        void resize();
        void shift(int x); // shifts elements before removed element to the left


    public:
        void add(T x);
        T remove();
        MyRandomQueue();
        ~MyRandomQueue();
};

#endif