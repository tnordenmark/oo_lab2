/* 
   File:        Tripptrapp.cpp
   Topic:       Class initialization order           

*/

#include <iostream>

using namespace std;

class Trull {
protected:
        int a;
public:
        Trull(int x=0):a(x) {
                cout << "Trull: a=" << a << endl;
        }
};


class Trapp:public Trull {
protected:
        int b;
public:
        Trapp(int x=0):Trull(2*x),b(x) {
                cout << "Trapp: a=" << a << " b=" << b <<endl;
        }
};


class Tripp:public Trapp {
protected:
        int c;
public:
        Tripp(int x=0):Trapp(2*x),c(x) {
                cout << "Tripp: a=" << a << " b=" << b << " c=" << c <<endl;
        }
};


int main() {
    Tripp(10);

    return(0);
}