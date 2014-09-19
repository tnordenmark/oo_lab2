/*
   File:        ProtInheritStack.cpp
   Objective:   Protected implementation inheritance
*/


#include "ProtInheritStack.h"


int Stack ::pop()
{
   return arr[top--];
}

void Stack ::push(const int &value)
{
      arr[++top] = value;
}
