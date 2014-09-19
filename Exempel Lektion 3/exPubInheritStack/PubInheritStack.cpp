/*
    File:       PubInheritStack.cpp
    Objective:  Public inheritance with wrong semantics
*/


#include "PubInheritStack.h"


int Stack::pop() {
	return arr[top--];
}

void Stack::push(const int &value) {
	arr[++top] = value;
}