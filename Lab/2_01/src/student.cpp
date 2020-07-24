#include <iostream>
#include <cstring>

#include "student.h"

void student::setName(std::string aname)
{
    this->name =aname;
}
std::string  student::getName()
{
    return this->name;
}
void student::issueBook(long p[MAX] )
{ int i;
    for (i=0;i<MAX ;i++)
    {
        this->books[i] = p[i];
    }

}
void student::getissuedBook()
{
    for (int i=0 ;i<MAX ;i++)
    {
        std::cout <<books[i] << std::endl;
    }
}
