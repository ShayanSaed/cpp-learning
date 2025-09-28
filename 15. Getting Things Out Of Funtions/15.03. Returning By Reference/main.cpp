#include <iostream>

int &max_return_reference(int &a, int &b)
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
     int x{22}, y{37};
     int &ref_max = max_return_reference(x, y); // Reference
     int val = max_return_reference(x, y);      // Copy

     std::cout << "ref_max: " << ref_max << std::endl; // 37
     std::cout << "val: " << val << std::endl;         // 37
     std::cout << "x: " << x << std::endl;             // 22
     std::cout << "y: " << y << std::endl;             // 37

     ref_max++;

     std::cout << std::endl;

     std::cout << "ref_max: " << ref_max << std::endl; // 38
     std::cout << "val: " << val << std::endl;         // 37
     std::cout << "x: " << x << std::endl;             // 22
     std::cout << "y: " << y << std::endl;             // 38

     return 0;
}