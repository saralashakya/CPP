//function definition to class point
#include <iostream>
#include <cmath>
 
 #include "point.h"

void point::set_points(double x , double y)
{
    this -> x =x;
    this -> y =y;
}
double point :: distance(const point &another) const
{
    double x,y;
    x =pow((another.x -this->x),2);
    y =pow((another.y-this->y),2);
    return (sqrt(x+y));
}
void point::print_points()
{
    std::cout << "(" << this->x << " , " << this -> y  << ")";
}