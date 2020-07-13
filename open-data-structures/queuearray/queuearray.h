/* 
Queue array data structure
date: 2020-07-12
author: john dimatteo
desc: implements a queue by simulating an infinite array using mod arthimetic
*/

#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H

#include "../arrays/array.h"

template <class T>

class MyQueueArray {
    private:
        MyArray<T> a;
        int n; // to keep track of the # of elements in queue
        int j; // keeps track of the next element to remove
        void resize();


    public:
        void add(T x);
        T remove();
        MyQueueArray();
        ~MyQueueArray();
};

#endif