#include <iostream>

#include "vector.h"
vector :: setrowsandcoloumns(){
    std::cout << "Enter the rows and coloumns " <<std::endl;
    std::cin >> m >> n ;
}
vector :: vector (){
    e1 = NULL;
    e2 =NULL;
    e3 = NULL;

}
std::ostream & operator << (std::ostream & outputStream , const vector& v)
{
    if (v.m  < v.n)

    {return outputStream <<"("<<*(v.e1) << ","<< *(v.e2) <<","<< *(v.e3)  << ")" <<std::endl;}
    else
    {
        return outputStream <<"\n("<<*(v.e1) << ")" <<std::endl <<"("<< *(v.e2) << ")" << std::endl << "(" <<*(v.e3)  <<")"  <<std::endl;
    }
    
}
std::istream & operator >> (std::istream& inputStream , const vector & v)
{
    return inputStream >> *(v.e1)  >>  *(v.e2) >> *(v.e3) ;
}
vector :: vector(int a , int b ,int c){
   this -> e1 =new int(a);
    
    this ->e2 =new int(b);
    
    this -> e3 =new int(c);
    }
vector :: vector (const vector& another)
{
    e1 = another.e1;
    e2 = another.e2;
    e3 = another.e3;
}

vector vector ::operator +(const vector  &v1 ){
    
    int e1,e2,e3;
    e1 =*(v1.e1)+ *(this-> e1); 
    e2 =*(v1.e2)+ *(this -> e2);
    e3 = *(v1.e3)+ *(this ->e3);
    vector v(e1,e2,e3); 
    return v;
    
 
}
vector vector ::operator +=(const vector  &v1 ){
    
    int e1,e2,e3;
    e1 =*(v1.e1)+ *(this-> e1); 
    e2 =*(v1.e2)+ *(this -> e2);
    e3 = *(v1.e3)+ *(this ->e3);
    vector v(e1,e2,e3); 
    return v;
    
 
}
int vector :: operator *(const vector & v)
{
int e;
e= (*(v.e1))*(*this->e1)+(*(v.e2))*(*this->e2)+(*(v.e3))*(*this->e3);
return e;
}
void vector::operator ++()
{
 
    ++(*(this->e1));
    ++(*(this->e2));
    ++(*(this->e3));
}
void vector::operator ++(int x)
{
 
(*(this->e1))++;
    (*(this->e2))++;
    (*(this->e3))++;
}

void vector::operator -()
{
 
    *this->e1 = -*(this->e1);
    *this->e2 = -*(this->e2);
    *this->e3 = -*(this->e3);
}
bool vector :: operator==(const vector &v)
{
    if (*this->e1 == *(v.e1) && *this->e2 == *(v.e2) && *this->e3 == *(v.e3))
    {return 1;}
    else 
    {return 0;}

}
bool vector :: operator>(const vector &v)
{
    if (*this->e1 > *(v.e1) && *this->e2 > *(v.e2) && *this->e3 > *(v.e3))
    {return 1;}
    else 
    {return 0;}

}
vector :: ~vector()
{
    delete e1,e2,e3;
}
