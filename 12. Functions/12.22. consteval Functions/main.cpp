#include <iostream>

// Evaluate this function at compile time, If you can't
// do that throw a compiler error
consteval int get_value(int multiplier)
{
     return multiplier * 3;
}

int main()
{
     // int some_var{10};
     // int result = get_value(some_var); // ❌ consteval not work on run time ❌

     int result = get_value(5);
     std::cout << "result: " << result << std::endl; // 15

     return 0;
}