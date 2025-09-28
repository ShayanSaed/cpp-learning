#include <iostream>

auto max(int &a, int &b)
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
     int x{19}, y{5};

     int max_number = max(x, y);

     std::cout << "max_number: " << max_number << std::endl; // 19

     return 0;
}