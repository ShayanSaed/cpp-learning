#include <iostream>
#include "compare.h"
#include "operations.h"

int main()
{
     int maximum = max(34, 96);
     std::cout << "max: " << maximum << std::endl; // 96

     int minimum = min(14, 52);
     std::cout << "min: " << minimum << std::endl; // 14

     int incr_mult = increment_multiply(7, 16);
     std::cout << "increment multiply: " << incr_mult << std::endl; // 136

     return 0;
}