/*
    File:       PubInheritStack.h
    Objective:	Public inheritance (with wrong semantics...)
*/

#ifndef PubInheritStackH
#define PubInheritStackH

#include "Array.h"


class Stack : public Array  {
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