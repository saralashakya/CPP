#include <iostream>

#include "student.h"
int main(void)
{
    student s1;
    s1.setName("Anish");
    long bookid[MAX];
    int i;
    for(i=0;i<10;i++)
    {
        std::cout <<"Enter the book id" <<std::endl;
        std::cin >> bookid[i];
    }
   
    s1.issueBook(bookid);
    
    std::cout << "Name \t"  << s1.getName() <<std::endl;
    s1.getissuedBook();
}