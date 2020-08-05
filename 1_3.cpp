#include <iostream>
int main() {
 int a = 10;
 int* ptr = &a;
 std::cout << "ptr = " << ptr << std::endl;
 std::cout << "&ptr = " << &ptr << std::endl;
 std::cout << "&a = " << &a << std::endl;
 std::cout << "a = " << a << std::endl;
 std::cout << "*ptr = " << *ptr << std::endl;
 *ptr = 20;
 std::cout << "a = " << a << std::endl;
}
/* The program has used a ptr as a pointer variable which stores the memory address of a
so the ptr prints the memory address of ptr.&ptr shows the address of pointer variable ptr.
&a shows the address of a corresponding to ptr, a will obviously show the value 10. *  is an 
indirection operator which is also a dereference ope 1_3.cpp rator that shows the value the pointer is 
pointing to. Now as *ptr =20 the value of a is changed and a will print 20 */