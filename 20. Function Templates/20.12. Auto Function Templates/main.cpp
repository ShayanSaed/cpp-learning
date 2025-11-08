#include <iostream>

// This code, will generated the commented below code
auto add(auto a, auto b)
{
     return a + b;
}

// generated code:
/*
template <typename T, typename P>
decltype(auto) add(T a, P b)
{
     return a + b;
}
*/

int main()
{
     int a{11};
     double b{4.9};

     auto result = add(a, b);
     std::cout << "result: " << result << std::endl;                 // 15.9
     std::cout << "sizeof(result): " << sizeof(result) << std::endl; // 8

     return 0;
}