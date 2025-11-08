#include <iostream>

// Problematic: return depends on the order of the template arguments
template <typename ReturnType, typename T, typename P>
// template <typename T, typename ReturnType, typename P>
// template <typename T, typename P, typename ReturnType>
ReturnType maximum(T a, P b)
{
     return ((a > b) ? a : b);
}

int main()
{
     int a{16};
     double b{41.2};

     auto result = maximum<int>(a, b);                                                         // return type will be "int"
     std::cout << "result: " << result << ", sizeof(result): " << sizeof(result) << std::endl; // result: 41, sizeof(result): 4

     return 0;
}