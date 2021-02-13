#include "Student.h"

string Student::getCollege()
{
    return m_college;
}

void Student::setCollege(string name)
{
    m_college = name;
}

string Student::getProgram()
{
    return m_program;
}

void Student::setProgram(string name)
{
    m_program = name;
}

int Student::getCurrentSemester()
{
    return m_currentSemester;
}

void Student::setCurrentSemester(int num)
{
    m_currentSemester = num;
}

int Student::getHours()
{
    return m_hoursEntertained;
}

void Student::setHours(int hours)
{
    m_hoursEntertained = hours;
}
