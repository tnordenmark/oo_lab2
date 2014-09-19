/*      
   File:        TestProtInherit.cpp
   Objective:   Demo protected implementation inheritance
   Date:        2004 / Örjan Sterner
*/


#include <iostream>
#include "ProtInheritStack.h"


using namespace std;

int main(int argc, char* argv[])
{
        Stack s(5);
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

       // s.sort();   // NOT ACCESSEBLE!

       // cout << s[2] << endl;   // NOT ACCESSIBLE!
        while(!s.empty())
            cout << s.pop() << ' ';    // 6 -7 62 13 19

        cout << endl;
        system("pause");
        return 0;
}
