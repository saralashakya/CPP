#pragma once

class vector{
   
int  *e1 ;
int  *e2 ;
int  *e3;

public:
 int m ,n;
void setrowsandcoloumns();
vector ();
vector (int ,int ,int);
vector (const vector &);

friend vector operator +(const vector &, const vector &);
vector operator += (const vector &);

int  operator * ( const vector &);
 bool operator == (const vector & );

friend bool operator > (const vector &,const vector &);
void operator ++();
void operator ++ (int) ;
void operator -();
~vector();
friend std::ostream& operator <<(std::ostream& outputStream, const vector &);
friend std::istream& operator >>(std::istream& inputStream, const vector &);
};

