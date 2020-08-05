#include <iostream>
#include "vector.h"
int main(void){
vector v1(10,11,12);
vector v2(20,30,40);
vector v3 =v2+v1; //v2.operator+(c2)
std::cout <<"Vector v1 is:"  <<std::endl;
v1.print();
std::cout <<"Vector v2 is:"  <<std::endl;
v2.print();

std::cout <<"v1+v2:" <<std::endl;
v3.print();
v3++;

std::cout <<"v3++:" <<std::endl;
v3.print();

++v3;
std::cout <<"++v3:" <<std::endl;
v3.print();

-v3;//v3.operator-();
std::cout <<"-v3:"  <<std::endl;
v3.print();

}