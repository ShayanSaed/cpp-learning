#include <iostream>

size_t sum_up_to_zero(size_t value)
{
     if (value != 0)
     {
          return value + sum_up_to_zero(value - 1); // 5 + 4 + 3 + 2 + 1 + 0
     }

     return 0;
}

int main()
{
     std::cout << "result: " << sum_up_to_zero(5) << std::endl; // 15

     return 0;
}