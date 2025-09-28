#include <iostream>

int *max_return_pointer(int *a, int *b)
{
     if (*a > *b)
     {
          return a;
     }
     else
     {
          return b;
     }
}

int main()
{
     int x{22}, y{37};
     int *p_max = max_return_pointer(&x, &y);

     std::cout << "*p_max: " << *p_max << std::endl; // 37
     std::cout << "x: " << x << std::endl;           // 22
     std::cout << "y: " << y << std::endl;           // 37

     ++(*p_max);

     std::cout << std::endl;

     std::cout << "*p_max: " << *p_max << std::endl; // 38
     std::cout << "x: " << x << std::endl;           // 22
     std::cout << "y: " << y << std::endl;           // 38

     return 0;
}