#include <iostream>
#include <concepts>

// Syntax 1
/*
template <typename T>
     requires std::integral<T>
T add(T a, T b)
{
     return a + b;
}
*/

// Syntax 2
/*
template <std::integral T>
T add(T a, T b)
{
     return a + b;
}
*/

// Syntax 3
/*
auto add(std::integral auto a, std::integral auto b){
     return a + b;
}
*/

// Syntax 4
template <typename T>
T add(T a, T b)
     requires std::integral<T>
{
     return a + b;
}

int main()
{
     int a_x{5}, a_y{14};
     auto result_a = add(a_x, a_y);
     std::cout << "result_a: " << result_a << std::endl; // 19

     double b_x{8.5}, b_y{19.2};
     // auto result_b = add(b_x, b_y); // Error: no instance of function template "add" matches the argument list
     // std::cout << "result_b: " << result_b << std::endl;

     char c_x{16}, c_y{7};
     auto result_c = add(c_x, c_y);
     std::cout << "result_c: " << static_cast<int>(result_c) << std::endl; // 23

     return 0;
}