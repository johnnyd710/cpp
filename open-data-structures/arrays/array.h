#ifndef ARRAY_H
#define ARRAY_H

#include<assert.h>
#include <cstddef>

/*
author: john dimatteo
created on: 6/7/2020
desc:
a simple array data structure that keeps track of its own length,
since the default C++ array doesn't. 
Developed from: http://opendatastructures.org/ods-cpp/2_Array_Based_Lists.html
*/

template <class T>

class MyArray {
    private:
        T *a;
    public:
        int length;
        // constructor
        MyArray(int len) {
            length = len;
            a = new T[length];
        }

        // destructor
        ~MyArray() {}

        // operator overloading: indexing the array [i]
        T& operator[](int i) {
            assert(i >= 0 && i < length);
            return a[i];
        }

        // operator overloading: assignment b = a of two arrays 
        MyArray<T>& operator=(MyArray<T> &b) {
            if (a != NULL) delete[] a;
            a = b.a;
            b.a = NULL;
            length = b.length;
            return *this;
        }
};

#endif