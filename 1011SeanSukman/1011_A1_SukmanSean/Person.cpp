#include "Person.h"

string Person::getName()
{
    return m_name;
}

void Person::setName(string n)
{
    m_name = n;
}

int Person::getAge()
{
    return m_age;
}

void Person::setAge(int num)
{
    m_age = num;
}
