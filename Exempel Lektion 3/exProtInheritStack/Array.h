/*
  File:         Array.h
  Objective:    Array class with dynamic memory allocation
*/


#ifndef ARRAY_H
#define ARRAY_H

#include <memory>
using std::unique_ptr;

const int ARRAYSIZE = 10;

class Array {
protected:
        int arrSz;    // Array size
        unique_ptr<int[]> arr;       // Dynamic array

public:
        Array(int sz=ARRAYSIZE);

		int size() { return arrSz; }
        int& operator[](int);
		const int& operator[](int) const;
		void sort();
};

#endif
