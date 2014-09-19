/*
    File:       StackWithArray.cpp
    Objective:  Stack using Array through composition
*/



#include "StackWithArray.h"

int Stack ::pop()
{
   return arr[top--];
}

void Stack ::push(const int &value)
{
      arr[++top] = value;
}
