/*      
    File:       TestPubInherit.cpp
    Objective:  Demo misuse of public inheritance
*/

#include<iostream> 
#include "PubInheritStack.h"


using namespace std;

int main(int argc, char* argv[])
{
	Stack  s(5);
	s.push(2);     // push OK
	s.push(3);
	s.push(4);

	while (!s.empty())
		cout << s.pop() << ' ';  // 4 3 2  OK
	cout << endl;

	s.push(19);
	s.push(13);
	s.push(62);
	s.push(-7);
	cout << s[2] << endl; // Subscripting a stack??
	s.sort();   // What’s this? Sorting a stack??

	while (!s.empty())
		cout << s.pop() << ' ';  // 62 19 13 -7
    return 0;
}