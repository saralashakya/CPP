#include <cmath>
#include "point.h"
void point::getpoint(double a , double b)
{
    x=a;
    y=b;
}
double point :: distance(point& reference)
{
    point temp;
    temp.x =pow((reference.x -x),2);
    temp.y = pow((reference.y -y),2);
    return (sqrt(temp.x+temp.y));
}