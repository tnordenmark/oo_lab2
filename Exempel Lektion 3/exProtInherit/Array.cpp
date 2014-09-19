/*
  File:         Array.cpp
  Objective:    Implementation class Array
  Date:         2004 / Örjan Sterner
*/

#include "Array.h"
#include <iostream>
#include <stdlib>

using namespace std;

Array::Array(int sz)
:arrsize(sz)
{
    arr = new int[arrsize];
}

Array::~Array() {

   delete [] arr;
}

int& Array ::operator[](int idx) {

   if(idx >= arrsize || idx < 0) {
       cerr << "\nclass Array ERROR: index " << idx;
       cerr << " out of range. Exiting." << endl;
       cin.get();
       exit(1);
   }
   return arr[idx];
}

void Array ::sort() {
// Selection sort
   int i, j, idxSmall;
   int tmp;

   for(i=0; i < arrsize-1 ;i++) {
     idxSmall=i; // index for element to compare to
     for(j=i+1; j<arrsize; j++)    // serach for smallest element
       if(arr[j] < arr[idxSmall])
        idxSmall = j; // index for a smaller item
       if(arr[idxSmall] < arr[i]) { // found a smaller element
            tmp = arr[i];            // swap element
         arr[i] = arr[idxSmall];
         arr[idxSmall] = tmp;
     }
   } // for i
}
