#include <iostream>

auto &max(int &a, int &b)
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
     int x{16}, y{39};

     int result = max(x, y); // A copy of the max is returned

     ++result;

     std::cout << "x:" << x << std::endl;            // 16
     std::cout << "y:" << y << std::endl;            // 39
     std::cout << "result: " << result << std::endl; // 40

     return 0;
}