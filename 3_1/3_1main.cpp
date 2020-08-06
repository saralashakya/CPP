#include <iostream>
#include "3_1rectangle .h"
#include "3_1point.h"
int main(void){
    point p,q,r;
    
    p.getpoint(1,1);
    q.getpoint(2,1);
    r.getpoint(2,2);
    rectangle a;
    a.setPoints(p,r);
    double c=q.distance(p);
    
    double d=q.distance(r);
    a.getDimensions(c,d);
    std::cout << "Perimeter is :" << a.perimeter() << std:: endl;
}