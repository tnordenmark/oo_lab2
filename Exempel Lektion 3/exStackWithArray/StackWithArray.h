/*
    File:       StackWithArray.h
    Objective:  Stack using Array through composition
*/


#ifndef STACKWITHARRAY_H
#define STACKWITHARRAY_H

#include "Array.h"


class Stack  {
private:
    Array  arr;  // Member!
    int top; // top of stack
    enum {SIZE=100, BOS=-1};
public:
    Stack(int sz=SIZE)
    :arr(sz), top(BOS) { }

    void push(const int &value);
    int pop() ;
    bool empty()const { return top==BOS; }
};

#endif