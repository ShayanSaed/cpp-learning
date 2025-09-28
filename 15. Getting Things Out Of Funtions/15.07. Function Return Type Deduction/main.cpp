#include <iostream>

// The right way: return type deduction
/*
auto process_number(int value)
{
     if (value < 50)
     {
          return 40; // returning integer
     }
     else
     {
          return 60; // returning integer
     }
}
*/

auto process_number(int value)
{
     if (value < 50)
     {
          return static_cast<double>(40); // returning integer
     }
     else
     {
          return 60.6; // returning double
     }
}

int main()
{
     auto result = process_number(43);

     std::cout << "result: " << result << std::endl;
     std::cout << "sizeof(result) : " << sizeof(result) << std::endl;
     std::cout << "sizeof(int): " << sizeof(int) << std::endl;
     std::cout << "sizeof(double): " << sizeof(double) << std::endl;

     return 0;
}