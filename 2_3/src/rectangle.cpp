#include <iostream>
#include "rectangle.h"
#include "point.h"
void rectangle :: setPoints(const point & a ,const point & b)
{
    this-> p1 = a;
    this -> p3 =b;


}
void rectangle :: getDimensions(double & l, double & w )
{
    point p2;
    p2.getpoint(2,2);
    this ->l= p3.distance(p1);

   this-> w= p3.distance(p2);
}
 double rectangle :: perimeter (){
    
    return (2*(l+w));
}

















