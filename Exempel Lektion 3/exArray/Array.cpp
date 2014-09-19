/*
  File:         Array.cpp
  Objective:    Implementation of class Array
*/

#include "Array.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Array::Array(int sz)
:arrSz(sz)
{
	arr.reset(new int[arrSz]);
}


int& Array ::operator[](int idx) {

	if (idx >= arrSz || idx < 0) {
       cerr << "\nclass Array ERROR: index " << idx;
       cerr << " out of range. Exiting." << endl;
       exit(1);
   }
   return arr[idx];
}


void Array::sort() {
	// Selection sort
	int i, j, idxSmall, tmp;

	for (i = 0; i < arrSz - 1; i++) {
		idxSmall = i; // index for element to compare to
		for (j = i + 1; j<arrSz; j++) // search for smallest element
			if (arr[j] < arr[idxSmall])
				idxSmall = j; // index for a smaller item
		if (arr[idxSmall] < arr[i]) { // found a smaller element
			tmp = arr[i];            // swap element
			arr[i] = arr[idxSmall];
			arr[idxSmall] = tmp;
		}
	} // for i
}
