/*
    File:       Employee.h
    Topic:      Definition of Employee hierarchy
*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

#include<string>

class Employee {
private:
    int iSalary;
    string iName;

public:
    Employee(string s)
		:iName(s), iSalary(0)  { }

	string getName() const { return iName; }
	void setSalary(int s) { iSalary = s; }
	int getSalary() const { return iSalary; }
};


class Manager:public Employee {
private:
    int iBonus;

public:
    Manager(string s)
		:Employee(s), iBonus(0) { }

	void setBonus(int b) { iBonus = b; }
	int getBonus() const { return iBonus; }

};



class SuperManager:public Manager {
private:
    long iParachute;

public:
    SuperManager(string s)
		:Manager(s), iParachute(1000000) { }

	void setPara(long p) { iParachute = p; }
	long getPara() const { return iParachute; }
};

#endif
