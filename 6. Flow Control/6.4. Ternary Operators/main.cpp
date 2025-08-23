#include <iostream>

int main()
{
     int max{};

     int a{35}, b{200};

     // regular if
     /*
     if (a > b)
     {
          max = a;
     }
     else
     {
          max = b;
     }
     */

     // ternary operator
     max = (a > b) ? a : b;

     std::cout << "max: " << max << std::endl;

     return 0;
}