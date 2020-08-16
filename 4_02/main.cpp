#include <iostream>
#include "vector.h"
int main(void){
 
std::cout << "Please enter either a 1*3 vector or 3*1 vector" <<std::endl;
vector v1(0,0,0); 
v1.setrowsandcoloumns();

std::cout << "Enter vector v1"<<std::endl;
std::cin >> v1;
vector v2(0,0,0);
std::cout << "Please enter either a 1*3 vector or 3*1 vector" <<std::endl;
v2.setrowsandcoloumns();

std::cout << "Enter vector v2"<<std::endl;
std::cin >> v2;


std::cout <<"Vector v1 is:"  <<std::endl;
std::cout << v1;
std::cout <<"Vector v2 is:"  <<std::endl;
std::cout << v2;
if(v1.m== v2.m)
{
vector v3 =v2+v1; //v2.operator+(c2)
std::cout <<"v1+v2:" << v3 << std::endl;
}
if(v1.n==v2.m)
{
    std::cout << "v1*v2=" << v1*v2 << std::endl;
}
if(v1.m==v2.m)
{
    v1+=v2;
    std::cout << "v1+=v2 :" << v1 << std::endl;
}
if( v1.m == v2.m)
{
 if (v1 > v2)   
 {
    std::cout << v1 <<" is greater than \n" << v2 << std::endl;
 
 }
else if( v1 == v2)
{
    std::cout << v1 <<" is equal to \n" << v2 << std::endl;
}
else
{
    
    std::cout << v1 <<" is less than \n " << v2 << std::endl;
}

}
else
{
std::cout << v1 <<"and \n " << v2 << "are of different types " <<std::endl;
    
}

v1++;

std::cout <<"v1++:" << v1<< std::endl;

++v2;
std::cout <<"++v2:" << v2 << std::endl;


-v1;//v3.operator-();
std::cout <<"-v1:"  <<v1 <<std::endl;


}