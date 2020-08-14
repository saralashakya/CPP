#include <iostream>
#include "Time.h"
int main() {
 Time t1(1, 59, 59);
std::cout << "Initial time" << t1 <<std::endl;

Time t2(2,42,45) ;
std::cout <<"Final time" << t2<<std::endl;

Time t3;
t3 = t1 +t2;
std::cout << "Added time is:" <<t3 <<std::endl;
 Time t = ++t3; 

std::cout << "Adding 1 sec to the added final time is:" <<t3<<std::endl;
Time t4;
t4=t3;
std::cout << t4 <<endl;

 }
