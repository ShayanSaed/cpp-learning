#include <iostream>
#include <type_traits>

template <typename T>
void print_number(T n)
{
     static_assert(std::is_integral_v<T>, "print_number() can only be called with integral types");
     std::cout << "number: " << n << std::endl;
}

int main()
{
     /*
     std::cout << std::boolalpha;
     std::cout << "std::is_integral<int>: " << std::is_integral<int>::value << std::endl;             // true
     std::cout << "std::is_floating_point<int>: " << std::is_floating_point<int>::value << std::endl; // false

     std::cout << "------------------------------------------------" << std::endl;

     std::cout << "std::is_integral_v<int>: " << std::is_integral_v<int> << std::endl;             // true
     std::cout << "std::is_floating_point_v<int>: " << std::is_floating_point_v<int> << std::endl; // false
     */

     /*
     double x{61};

     print_number(x); // print_number() can only be called with integral types
     */

     /*
     auto add = []<typename T>(T a, T b)
     {
          static_assert(std::is_integral_v<T>, "add function can only be called with integral types");
          return a + b;
     };

     double a{28}, b{55};
     add(a, b); // add function can only be called with integral types
     */

     return 0;
}