#include<assert.h>
#include "../arrays/array.h"
#include "queuearray.h"
#include <algorithm>    // std::max

/* 
Queue array data structure
date: 2020-07-12
author: john dimatteo
desc: implements a queue by simulating an infinite array using mod arthimetic
*/

template <class T>
MyQueueArray<T>::MyQueueArray() : a(1) {
    n = 0;
}

template <class T>
MyQueueArray<T>::~MyQueueArray() { }

/* resize the array by growing x2 or shrinking /2
    runtime: O(n) since it is copying elements one by one into new array b */
template <class T>
void MyQueueArray<T>::resize() {
    MyArray<T> b(std::max(2*n, 1));
    for (int k = 0; k < n; k++)
        b[k] = a[(j+k) % a.length];
    a = b;
    j = 0;
}

template <class T>
void MyQueueArray<T>::add(T x) {
    if (n + 1 > a.length) resize();
    a[(j+n) % a.length] = x;
    n++;
}

template <class T>
T MyQueueArray<T>::remove() {
    T y = a[j];
    j = (j + 1) % a.length;
    n--;
    if (a.length >= 3*n) resize();
    return y;
}

/* define the allowable types */
template class MyQueueArray<float>;
template class MyQueueArray<char>;
template class MyQueueArray<int>;