#include<assert.h>
#include "../arrays/array.h"

/*
author: john dimatteo
created on: 6/23/2020
desc:
a stack array data structure that grows automatically
    get(), set(), add(), remove(), resize()
Developed from: http://opendatastructures.org/ods-cpp/2_1_Fast_Stack_Operations_U.html
*/

template <class T>

class MyStackArray {
    private:
        MyArray<T> a;
    public:
        /* number of elements stored in the stackarray, n <= a.length */
        int n;
        int size() {
            return n;
        }
        // constructor
        MyStackArray() { }

        // destructor
        ~MyStackArray() {}

        /* gets element at position i */
        T get(int i) {
            return a[i];
        }

        /* sets element at position i */
        T set(int i, T x) {
            T y = a[i];
            a[i] = x;
            return y;
        }

        /* */
        /* */
};
