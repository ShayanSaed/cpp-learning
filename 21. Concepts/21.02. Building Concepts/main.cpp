#include <iostream>
#include <type_traits>
#include <concepts>

// Build concept
template <typename T>
concept Addable = std::is_integral_v<T>;

// Use concept
Addable auto add(Addable auto a, Addable auto b)
{
     return a + b;
}

// --------------------------------------------------------------------

// Build concept
template <typename T>
concept Multipliable = requires(T a, T b) {
     a * b;
};

// Use concept
Multipliable auto multiply(Multipliable auto a, Multipliable auto b)
{
     return a * b;
}

// --------------------------------------------------------------------

// Build concept
template <typename T>
concept Incrementable = requires(T a) {
     ++a;
     a++;
     a += 1;
};

// Use concept
Incrementable auto increment(Incrementable auto value)
{
     ++value;
     value++;
     value += 1;

     return value;
}

int main()
{
     std::cout << add(5, 9) << std::endl; // 14 | int + int
     // std::cout << add(2.6, 11.8) << std::endl; // Error

     std::cout << multiply(5, 9) << std::endl;      // 45 | int * int
     std::cout << multiply(2.6, 11.8) << std::endl; // 30.68 | double * double

     std::cout << increment(5) << std::endl;   // 8 | int
     std::cout << increment(2.6) << std::endl; // 5.6 | double

     return 0;
}