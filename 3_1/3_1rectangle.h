#pragma once
class rectangle{
    private :
    point p1 ,p2, p3;
     double l ,w;
    public:
   void setPoints(const point &, const point &);
   void getDimensions(double &, double &);
   double perimeter() ;
};
