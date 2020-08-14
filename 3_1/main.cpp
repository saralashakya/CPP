#include "vector.cpp"
#include "vector.h"
int main(void){
vector v1(10,11,12);
vector v2(20,30,40);
vector v3 =(v2.add(v1));
v1.print();
std::cout << "     +" <<std::endl;
v2.print();
std::cout << "===========" <<std::endl;
v3.print();
}
