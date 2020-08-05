#pragma once
#include "point.h"
class rectangle{
    private :
    point p1 ,p2, p3;
    public:
    
     double l ,w;
   void setPoints(const point &, const point &);
   void getDimensions(double &, double &);
   double perimeter() ;
};
