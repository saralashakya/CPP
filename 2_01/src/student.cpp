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

void student::issueBook(long p[MAX],int n )
{ int i;
    for (i=0;i<n ;i++)
    {
        this->books[i] = p[i];
    }

}
long *  student::getissuedBook()
{   
    return books;
    }
void student::setgrade(grade g)
{
    this->g =g;
}
void student::getgrade()
{

 switch(g)
 {
 case 0:
 std::cout <<"A" <<std::endl;
 break;
 case 1:
 std::cout <<"A-" <<std::endl;
 break;
 case 2:
 std::cout <<"B+" <<std::endl;
 break;
 case 3:
 std::cout <<"B" <<std::endl;
 
 break;
 case 4:
 std::cout <<"B-" <<std::endl;
 break;
 case 5:
 std::cout <<"C+" <<std::endl;
 break;
 case 6:
 std::cout <<"C" <<std::endl;
 break;
 case 7:
 std::cout <<"C-" <<std::endl;
 break;
 case 8:
 std::cout << "D" <<std::endl;
 break;
 case 9:
 std::cout <<"F" <<std::endl;
 break;
 default:
 std::cout << "Not found " << std::endl;
 }
  
   }
