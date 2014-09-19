/*
  File:         ProtInheritStack.h
  Objective:    Protected implementation inheritance
*/


#ifndef ProtInheritStackH
#define ProtInheritStackH

#include "Array.h"


class Stack : protected Array {
private:
    int top; // top of stack
    enum {SIZE=100, BOS=-1};
public:
    Stack(int sz=SIZE)
    :Array(sz), top(BOS) { }

    void push(const int &value);
    int pop() ;
    bool empty()const { return top==BOS; }
};

#endif

