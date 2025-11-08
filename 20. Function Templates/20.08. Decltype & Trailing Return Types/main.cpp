#include <iostream>

template <typename T, typename P>
auto maximum(T a, P b) -> decltype((a > b) ? a : b);

int main()
{
     int a{20};
     double b{3.1};

     /*
     std::cout << "size: " << sizeof(decltype((a > b) ? a : b)) << std::endl; // 8

     decltype((a > b) ? a : b) c{5};                                       // Declaring other variables through declytype
     std::cout << "c: " << c << ", sizeof(c): " << sizeof(c) << std::endl; // 5 | 8
     */

     /*
     auto result = maximum(a, b);
     std::cout << "result: " << result << ", sizeof(result): " << sizeof(result) << std::endl; // 20 | 8
     */

     return 0;
}

template <typename T, typename P>
auto maximum(T a, P b) -> decltype((a > b) ? a : b)
{
     return (a > b) ? a : b;
}