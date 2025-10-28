#include <iostream>

inline int max(int a, int b)
{
     if (a > b)
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
     int a{53}, b{22};

     std::cout << "max: " << max(a, b) << std::endl;

     // What the compiler might do to inline your function call
     std::cout << "max: ";
     if (a > b)
     {
          return a;
     }
     else
     {
          return b;
     }

     return 0;
}