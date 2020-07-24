
//student.h
#include <string.h>
#ifndef STUDENT_H
#define STUDENT_H

#define MAX 10
class student {
    std::string name;
    long books[MAX];
    public:
    std:: string getName();
    void setName(std::string);
    void issueBook(long ptr[MAX]);
    void getissuedBook();
    
};
#endif