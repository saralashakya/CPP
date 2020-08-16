#include <iostream>
#include "vector.h"
//member function to set rows
void  vector::setrows(){
    std::cin >> m;
}

//member function to setcolumns
void vector :: setcoloumns()
{
    std::cin >> n;
}

//defailt constructor
vector :: vector (){
    e1 = NULL;
    e2 =NULL;
    e3 = NULL;
}

//overloading of << operator as friend function
std::ostream & operator << (std::ostream & outputStream , const vector& v)
{
    if (v.m  < v.n) // pattern for row vector
    {
    return outputStream <<"("<<*(v.e1) << ","<< *(v.e2) <<","<< *(v.e3)  << ")" <<std::endl;
    }
    else
    {//pattern for coloumn vector
    return outputStream <<"\n("<<*(v.e1) << ")" <<std::endl <<"("<< *(v.e2) << ")" << std::endl << "(" <<*(v.e3)  <<")"  <<std::endl;
    }
}

//overloading >> operator as friend function
std::istream & operator >> (std::istream& inputStream , const vector & v)
{
    return inputStream >> *(v.e1)  >>  *(v.e2) >> *(v.e3) ;
}

vector :: vector(int a , int b ,int c)
    {
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

//friend function that overloads + operator
 vector operator +(const vector  &v1,const vector &v2 )
    {
    int e1,e2,e3;
    e1 =*(v1.e1)+ *(v2. e1); 
    e2 =*(v1.e2)+ *(v2.e2);
    e3 = *(v1.e3)+ *(v2.e3);
    vector v(e1,e2,e3); 
    v.m=v1.m;
    v.n=v1.n;
    return v;   
    }

//normal function that overloads - operator
 vector operator -( vector  &v1, vector &v2 )
    {
    int e1,e2,e3;
    e1 =(v1.gete1())- (v2. gete1()); 
    e2 =(v1.gete2())- (v2.gete2());
    e3 =(v1.gete3())- (v2.gete3());
    vector v(e1,e2,e3); 
    v.setcoloumns_a(v1.getcoloumns());
    v.setcoloumns_a(v1.getcoloumns());
    return v;   
    }

//member function that overloads += operator
vector vector ::operator +=(const vector  &v1 ){
    
    int e1,e2,e3;
    e1 =*(v1.e1)+ *(this-> e1); 
    e2 =*(v1.e2)+ *(this -> e2);
    e3 = *(v1.e3)+ *(this ->e3);
    vector v(e1,e2,e3); 
    return v;
}

//friend function that is overloading * operator
int  operator *(const vector & v,const vector & v1)
{
int e;
e= (*(v.e1))*(*v1.e1)+(*(v.e2))*(*v1.e2)+(*(v.e3))*(*v1.e3);
return e;
}
//overloading of unary operators
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

//overloading of == operator as normal function
bool  operator==(vector &v, vector &v1)
{
    if ((v1.gete1() == v.gete1()) && (v1.gete2() == v.gete2()) && (v1.gete3() == v.gete3()))
    {return true;}
    else 
    {return false;}

}

//overloading of > operator as friend function
 bool operator >(const vector &v1, const vector &v2)
{
    if (*v1.e1 > *(v2.e1) && *v1.e2 > *(v2.e2) && *v1.e3 > *(v2.e3))
    {return 1;}
    else 
    {return 0;}
}

//destructor
vector :: ~vector()
{
    delete e1,e2,e3;
}
