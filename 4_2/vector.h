#pragma once

class vector{  
int  *e1 ;
int  *e2 ;
int  *e3;
int m,n; //m,n are variables for rows and coloumns

public:
void setrows();// asks the user the rows
void setrows_a(int a){this -> m =a;} // sets rows as per the programmer
void setcoloumns();
void setcoloumns_a(int a){this -> n =a;}
int getrows(){ return m;} //displays the rows
int getcoloumns(){return n;}
int gete1(){return *e1;} 
int gete2(){return *e2;}
int gete3(){return *e3;}
vector (); //constructor that  nullifies the pointer
vector (int ,int ,int);
vector (const vector &);//copy constructor
friend vector operator +(const vector &, const vector &); //friend function to overload + operator
vector operator += (const vector &); // member function overloading += operator
friend int  operator * ( const vector & ,const vector &); //friend function to overload * operator
friend bool operator > (const vector &,const vector &);//friend function to overload > operator
friend std::ostream& operator <<(std::ostream& outputStream, const vector &); //friend function to overload >> operator
friend std::istream& operator >>(std::istream& inputStream, const vector &);//friend function to overload << operator

//overloading of unary operators as shown in lab 4_01
void operator ++(); 
void operator ++ (int) ;
void operator -();

~vector(); // destructor
};

