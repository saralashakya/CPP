//class file 
#pragma once 
#include <iostream>
class Time {
 short hours;
 short minutes;
 short seconds;
 public:
 Time() { }
 Time(short hours, short minutes, short seconds)
 : hours(hours), minutes(minutes), seconds(seconds) { }
 Time& operator++();
 Time& operator+(const Time & );
//overloading cout

friend std::ostream& operator<<(std::ostream &output, const Time &t);
 void display();

};