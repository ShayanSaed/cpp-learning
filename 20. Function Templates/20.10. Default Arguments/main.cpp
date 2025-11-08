#include <iostream>

template <typename ReturnType, typename T, typename P>
ReturnType maximum(T a, P b)
{
     return (a > b) ? a : b;
}

int main()
{
     double x{41.5}, y{10.8};

     auto result = maximum<double, int, int>(x, y); // Return type will be double type, and convert "x" & "y" to integer type

     std::cout << "result: " << result << std::endl;                 // 41
     std::cout << "sizeof(result): " << sizeof(result) << std::endl; // 8

     return 0;
}