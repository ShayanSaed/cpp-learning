#include <iostream>

template <typename T, typename P>
decltype(auto) maximum(T a, P b)
{
     return (a > b) ? a : b;
}

int main()
{
     int x{11};
     double y{30.3};

     auto result = maximum(x, y);
     std::cout << "max: " << result << std::endl;                    // 30.3
     std::cout << "sizeof(result): " << sizeof(result) << std::endl; // 8

     return 0;
}