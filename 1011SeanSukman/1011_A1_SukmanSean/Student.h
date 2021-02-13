#pragma once
#include "Person.h"
using namespace std;

class Student : public Person
{
private:
	string m_college, m_program;
	int m_currentSemester, m_hoursEntertained;
public:
	string getCollege();
	void setCollege(string name);

	string getProgram();
	void setProgram(string name);

	int getCurrentSemester();
	void setCurrentSemester(int num);

	int getHours();
	void setHours(int hours);
};
