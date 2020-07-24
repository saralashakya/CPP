//header file that defines the class to find distance
#pragma once
class point{
    double x ,y;
    public:
    void set_points( double ,double);
    double distance (const point& ) const ;
    void print_points();
};