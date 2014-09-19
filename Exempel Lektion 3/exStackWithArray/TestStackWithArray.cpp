/*
   File:        TestStackWithArray.cpp
   Objective:   Demo  stack using an Array
   Date:        2004 / Örjan Sterner

*/


#include <iostream>
#include "StackWithArray.h"

using namespace std;

int main(int argc, char* argv[])
{
	Stack  s(5);
	s.push(2);           // push OK
	s.push(3);
	s.push(4);

	while(!s.empty())
	  cout << s.pop() << ' ';    // pop OK
	cout << endl;

	s.push(19);
	s.push(13);
	s.push(62);
	s.push(-7);
	s.push(6);

	// s.sort();   // NOT A MEMBER OF Stack

	// cout << s[2] << endl; // NOT A MEMBER OF Stack
	while(!s.empty())
	  cout << s.pop() << ' ';    // 6 -7 62 13 19

	cout << endl;
	
	return 0;
}