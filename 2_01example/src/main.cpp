//the program sets the objects of the class point
#include <iostream>
#include "point.h"
 int main(void)
 {
     point p1 ,p2;
     p1.set_points(10,20);
     
     p2.set_points(30,40);
    std::cout << "the distance between";
     p1.print_points(); 
    std::cout << " and " ; 
    p2.print_points(); 
    std::cout << " is " << p2.distance(p1) <<std:: endl;
 }