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

class MyStackArray {
    private:
        MyArray<T> a;
        /* resize the array by growing x2 or shrinking /2
            runtime: O(n) since it is copying elements one by one into new array b */
        void resize() {
            MyArray<T> b(std::max(2*n, 1));
            for (int i = 0; i < n; i++) {
                b[i] = a[i];
            }
            a = b;
        }

    public:
        /* number of elements stored in the stackarray, n <= a.length */
        int n;
        int size() {
            return n;
        }

        /* initialize MyStackArray and MyArray, n = 0, a = 1 */
        MyStackArray() : a(1) {
            n = 0;
        }

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

        /* adds element x to position i in the stack
            runtime: O(n) because of resize() */
        void add(int i, T x) {
            if (n + 1 > a.length) resize();
            for (int j = n; j > i; j--)
                a[j] = a[j-1];
            a[i] = x;
            n++;
        }

        /* removes element x from position i in the stack,
            and resizes to double the number of elements in the array 
            If the length is three times greater than the number of actual elements
            runtime: O(n) because of resize() */
        T remove(int i) {
            T x = a[i];
            for (int j = i; j < n - 1; j++)
                a[j] = a[j+1];
            n--;
            if (a.length > 3 * n) resize();
            return x;
        }        
};
