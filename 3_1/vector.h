#pragma once

class vector{
int  *e1 ;
int  *e2 ;
int  *e3;

public:
vector ();
vector (int ,int ,int);
vector (const vector &);
vector add (const vector &);
~vector();
void print();
};

