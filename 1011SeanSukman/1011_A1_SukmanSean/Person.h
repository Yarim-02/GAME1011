#pragma once
#include <iostream>

using namespace std;

class Person
{
private:
	string m_name;
	int m_age;
public:
	string getName();
	void setName(string n);

	int getAge();
	void setAge(int num);

};
