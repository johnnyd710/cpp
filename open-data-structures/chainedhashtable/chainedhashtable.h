/*
author: john dimatteo
created on: 8/8/2020
desc:
a chained hash table that uses an array of stackarrays
Developed from: http://opendatastructures.org/ods-cpp/5_1_Hashing_with_Chaining.html
*/

#include "../stackarray/stackarray.h";

template<class T>
class ChainedHashTable {
    public:
        typedef StackArray<T> List;
        array<List> t;
        int n;
        bool add();
        T remove(T x);
        T find(T x);
        ChainedHashTable();
        ~ChainedHashTable();
        int size() {
            return n;
        }
        void clear();

    private:
        int hash(T x);
};

/* constructor */
template<class T>
ChainedHashTable<T>::ChainedHashTable(): t(2) {
    n = 0;
};

/* destrcutor */
template<class T>
ChainedHashTable<T>::~ChainedHashTable() {};

/* 
    hash function takes value x that you are interested in 
    and produces the location of the list where the value is stored
*/
template<class T>
int ChainedHashTable<T>::hash(T x) {
    
};
