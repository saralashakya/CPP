//to swap two numbers using reference
#include <iostream>
#include <conio.h>
//function that takes parameters as reference
void swap_Using_Reference(int &number1 ,int &number2)
{
    number1 = number1 + number2;
    number2 = number1 -number2;
    number1 = number1 - number2;
    std::cout << "Values after being swapped"  << std::endl;
}
int main(void)
{
    int number1 ,number2;
    std::cout << "ENter two numbers" << std::endl;
    std::cin >> number1 >> number2;
    std::cout << "Numbers you entered" << std::endl;
    std::cout << number1 << "," << number2 << std::endl;
    swap_Using_Reference (number1 , number2);
    std:: cout << number1 << "," << number2 <<std::endl;
    getch();
}