#include <iostream>
#include <cmath>
class point {
   public:
  double x,y;
    void getpoint (double ,double);
    double distance (point &);
};
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
class rectangle{
    private :
    point p1 ,p2, p3;
    public:
    
     double l ,w;
   void setPoints(const point &, const point &);
   void getDimensions(double &, double &);
   double perimeter() ;
};
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
inline double rectangle :: perimeter (){
    
    return (2*(l+w));
}
int main(void){
    point p1,p3;
    
    p1.getpoint(1,1);
    p3.getpoint(2,1);
    rectangle a;
    a.setPoints(p1,p3);
    double c,d;
    a.getDimensions(c,d);
    std::cout << "Perimeter is :" << a.perimeter() << std:: endl;
}