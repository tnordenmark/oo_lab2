/*
   File:        ProtInheritStack.cpp
   Objective:   Protected implementation inheritance
   Date:        2004 / �rjan Sterner
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
