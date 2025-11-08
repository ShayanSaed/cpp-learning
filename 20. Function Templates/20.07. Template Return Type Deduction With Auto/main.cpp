#include <iostream>

template <typename T, typename P>
auto maximum(T a, P b)
{
     return (a > b) ? a : b;
}

int main()
{
     // Largest type is going to be deduced as return type
     auto max = maximum(101.3, 90);                            // 'double' return type deduced
     std::cout << "max: " << max << std::endl;                 // 101.3
     std::cout << "sizeof(max): " << sizeof(max) << std::endl; // 8

     return 0;
}