 // to calculate the volume and surface area of a cube, a cylinder and a pyramid using function overloading.
#include <iostream>
#include <cmath>
namespace n1{
    inline void volume(double a)
    {
        std::cout << "The volume of cube is " << pow(a,3) <<std::endl;
    }
    inline void volume(double r ,double h)
    {
        std::cout << "the volume of cylinder is " << M_PI*r*r*h << std::endl;
    }
    inline void volume(double l , double w ,double h)
    {
        std::cout << "The volume of right rectangular pyramid is" <<(l*w*h)/3 << std::endl;
    }

}
namespace n2{
inline  void surface_area(double a)
    {

        std::cout << "The surface area of cube is " << 6*pow(a,2) <<std::endl;
    }
    void surface_area(double r ,double h)
    {
        std::cout << "the surface area of cylinder is " << 2* M_PI*r*r+2* M_PI*r*h << std::endl;
    }
    void surface_area(double l , double w ,double h)
    {
        std::cout << "The surface area of right rectangular pyramid is" << (l*w)+l*sqrt(pow((w/2),2)+ pow(h,2))+ w*sqrt(pow((l/2),2)+ pow(w,2))<< std::endl;
    }

}
int main(void){
    double a,r,h,l,w,h1;
    std::cout <<"Enter the side of cube" << std::endl;
    std::cin >> a;
    n1::volume(a);
    n2::surface_area(a);
     std::cout <<"Enter the radius and height of cylinder " << std::endl;
    std::cin >> r >> h;
    n1::volume(r,h);
    n2::surface_area(r,h);
     std::cout <<"Enter the length ,width and height of right rectangular pyramid" << std::endl;
    std::cin >> l>>w>>h1;
    n1::volume(l,w,h1);
    n2::surface_area(l,w,h1);
    }
