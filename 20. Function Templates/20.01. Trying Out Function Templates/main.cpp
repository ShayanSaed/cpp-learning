#include <iostream>

template <typename T>
T maximum(T a, T b)
{
     return (a > b) ? a : b; // a & b must support the ">" operator.
                             // otherwise: Error
}

int main()
{
     int a{18}, b{2};

     double c{53.5}, d{42.1};

     std::string e{"Hello"}, f{"World"};

     std::cout << "max(int): " << maximum(a, b) << std::endl;    // int version | 18
     std::cout << "max(double): " << maximum(c, d) << std::endl; // double version | 53.5
     std::cout << "max(string): " << maximum(e, f) << std::endl; // string version | World

     int *p_a{&a}, *p_b{&b};

     auto result = maximum(p_a, p_b);

     std::cout << "result: " << *result << " | " << result << std::endl;

     return 0;
}