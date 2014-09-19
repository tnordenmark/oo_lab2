/*
  File:         Array.h
  Objective:    Array class with dynamic memory allocation
  Date:         2004 / Örjan Sterner
*/


#ifndef ARRAY_H
#define ARRAY_H

const int ARRAYSIZE = 10;

class Array {
protected:

        int arrsize;    // Array size
        int *arr;       // Pointer to dynamic array

public:
        Array(int sz=ARRAYSIZE);
        ~Array();

        int size() { return arrsize; }
        void sort();
        int& operator[](int);
};

#endif
