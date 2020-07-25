#include<assert.h>
#include "../arrays/array.h"
#include "randomqueue.h"
#include <algorithm>    // std::max
#include <stdlib.h>     /* srand, rand */
#include <iostream>


/* 
Queue array data structure
date: 2020-07-12
author: john dimatteo
desc: implements a queue by simulating an infinite array using mod arthimetic
*/

template <class T>
MyRandomQueue<T>::MyRandomQueue() : a(1) {
    n = 0;
}

template <class T>
MyRandomQueue<T>::~MyRandomQueue() { }

/* resize the array by growing x2 or shrinking /2
    runtime: O(n) since it is copying elements one by one into new array b */
template <class T>
void MyRandomQueue<T>::resize() {
    MyArray<T> b(std::max(2*n, 1));
    for (int k = 0; k < n; k++)
        b[k] = a[(j+k) % a.length];
    a = b;
    j = 0;
}

template <class T>
void MyRandomQueue<T>::add(T x) {
    if (n + 1 > a.length) resize();
    a[(j+n) % a.length] = x;
    n++;
}

/* shifts elements to the left of x by one space to the right */
template <class T>
void MyRandomQueue<T>::shift(int x) {
    for (int k = 0; k < n - (x - j) - 1; k++)
        a[x + k] = a[(x + k + 1) % a.length];
}

/* removes an element from the array uniformly at random*/
template <class T>
T MyRandomQueue<T>::remove() {
    std::cout << "before \n";
    for (int k = 0; k <a.length; k++)
        std::cout << a[k] << ", ";
    std::cout << "\n";
    // get x
    int random_int { rand() % n };
    T y = a[ j + random_int ];
    shift( j + random_int );
    n--;
    if (a.length >= 3*n) resize();
    std::cout << "after \n";
    for (int k = 0; k <a.length; k++)
        std::cout << a[k] << ", ";
    std::cout << "\n";
    return y;
}

/* define the allowable types */
template class MyRandomQueue<float>;
template class MyRandomQueue<char>;
template class MyRandomQueue<int>;