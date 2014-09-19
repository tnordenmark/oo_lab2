/*      
   File:        TestProtInherit.cpp
   Objective:   Demo protected implementation inheritance
*/

#include <iostream>
#include "ProtInheritStack.h"


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
	// cout << s[2] << endl; // OK Compile error - not accessible 
	// s.sort();   // OK Compile error - not accessible

	while (!s.empty())
		cout << s.pop() << ' ';  // -7 62 13 19
	return 0;

        cout << endl;
        system("pause");
        return 0;
}
