#include "3_1rectangle.h"
#include "3_1point.h"
void rectangle :: setPoints(const point & a ,const point & b)
{
    this-> p1 = a;
    this -> p3 =b;
}
void rectangle :: getDimensions(double & c, double &d )
{
    this-> l = c;
    this -> w=d;
    
}
inline double rectangle :: perimeter (){
    return (2*(l+w));
}
