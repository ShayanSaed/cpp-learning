#include <iostream>
#include <concepts>

template <typename T>
concept AddableNumber = (std::integral<T> || std::floating_point<T>) &&
                        (!std::same_as<T, bool>) &&
                        requires(T a) { a + a; };

template <AddableNumber T>
T add(T a, T b)
{
     return a + b;
}

int main()
{
     std::cout << add(5, 9) << std::endl; // 14 | OK
     std::cout << add(5.2, 9.7) << std::endl; // 14.9 | OK
     // std::cout << add('A', 9) << std::endl; // Error

     return 0;
}