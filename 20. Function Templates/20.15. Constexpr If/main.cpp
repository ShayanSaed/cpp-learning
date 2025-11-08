#include <iostream>
#include <type_traits>

void function_floating_point(double d)
{
     std::cout << "function_floating_point called!" << std::endl;
}

void function_integral(double d)
{
     std::cout << "function_integral called!" << std::endl;
}

template <typename T>
void check_type(T t)
{
     if constexpr (std::is_integral_v<T>)
          function_integral(t);
     else if constexpr (std::is_floating_point_v<T>)
          function_floating_point(t);
     else
          static_assert(std::is_integral_v<T> || std::is_floating_point_v<T>, "Argument must be integral or floating point");
}

int main()
{
     check_type(20);  // function_integral called!
     check_type(8.3); // function_floating_point called!
     // check_type("C"); // "Argument must be integral or floating point"

     return 0;
}