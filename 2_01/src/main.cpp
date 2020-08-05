#include <iostream>

#include "student.h"

int main(void)
{
    student s1;
      
    s1.setName("Anish");
    long bookid[MAX];
    int i,n;
    std::cout <<"How many books have you issued? (<10)" <<std::endl;
    std::cin >> n ;
    if (n<=10)
    {
    for(i=0;i<n;i++)
    {
        std::cout <<"Enter the book id" <<std::endl;
        std::cin >> bookid[i];
    }
   
    s1.issueBook(bookid,n);
   
    s1.setgrade(A);
    std::cout << "Name \t"  << s1.getName() <<std::endl;
    std::cout <<"Grade is : \t" ;
    s1.getgrade();
    std::cout << "Books issued:" << std::endl;
    s1.getissuedBook(n);
    }
    std::cout << "The library cant allow you more than 10 books" <<std::endl;
}