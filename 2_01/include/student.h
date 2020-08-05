
//student.h
#include <string.h>
#ifndef STUDENT_H
#define STUDENT_H

#define MAX 10
enum grade{A ,A_minus ,B_plus,B ,B_minus,C_Plus,C,C_minus,D,F};
    
class student {
    std::string name;
    long books[MAX];
    grade g;
    
    public:
    std:: string getName();
    void setName(std::string);
    void issueBook(long books[MAX],int);
    void getissuedBook(int );
    void setgrade(grade);
    void getgrade();

    
};
#endif