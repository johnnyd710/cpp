#ifndef STACKARRAY_H
#define STACKARRAY_H

#include<assert.h>
#include "../arrays/array.h"
#include <algorithm>    // std::max

/*
author: john dimatteo
created on: 6/23/2020
desc:
a stack array data structure that grows automatically
    get(), set(), add(), remove(), resize()
Developed from: http://opendatastructures.org/ods-cpp/2_1_Fast_Stack_Operations_U.html
*/

template <class T>

class MyFastStackArray {
    private:
        MyArray<T> a;
        /* resize the array by growing x2 or shrinking /2
            runtime: O(n) since it is copying elements one by one into new array b */
        void resize();

    public:
        /* number of elements stored in the stackarray, n <= a.length */
        int n;
        int size();

        /* initialize MyFastStackArray and MyArray, n = 0, a = 1 */
        MyFastStackArray();

        // destructor
        ~MyFastStackArray();

        /* gets element at position i */
        T get(int i);

        /* sets element at position i */
        T set(int i, T x);

        /* adds element x to position i in the stack
            runtime: O(n) because of resize() */
        void add(int i, T x);

        /* removes element x from position i in the stack,
            and resizes to double the number of elements in the array 
            If the length is three times greater than the number of actual elements
            runtime: O(n) because of resize() */
        T remove(int i);

        /* adds elements to the top of the stack */
        void push(T x);

        /* returns and removes element at the top of the stack */
        T pop();
};

#endif
