//to find standard deviation
#include <iostream>
#include <cmath>
 double calculation_standard_deviation(double *p , int n , double mean)
 {
     double sum=0.0;
     for (int i =0; i<n ;i++)
     {
         sum += pow((*(p+i) - mean ),2);

     }
     return sqrt(sum/(n-1));
 }
 int main(void)
 {
     int n;
     double x[5];
     std::cout << "how many numbers do you want to enter ?" << std::endl;
     std:: cin >> n;
     std::cout << "Enter " <<n << " numbers" << std::endl;
     double sum;
     for (int i=0 ; i < n ; i++)
     {
         std::cin >> x[i] ;
         sum += x[i];
     }
     double mean = sum /n;
     std::cout << "Mean is: " <<mean << std::endl;
     std:: cout << "Standard deviation is: " << calculation_standard_deviation(x,n,mean) << std:: endl;
 }