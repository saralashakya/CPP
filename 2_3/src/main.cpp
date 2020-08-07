
#include <iostream>
#include "point.h"
#include "rectangle.h"
int main(void){
    point p1,p3;
    
    p1.getpoint(1,1);
    p3.getpoint(2,2);
    rectangle a;
    a.setPoints(p1,p3);
    double c,d;
    a.getDimensions(c,d);
    std::cout << "Perimeter is :" <<  a.perimeter() << std:: endl;
}