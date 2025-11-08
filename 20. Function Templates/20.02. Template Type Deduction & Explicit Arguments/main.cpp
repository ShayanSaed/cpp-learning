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

     // Explicit template arguments

     auto result = maximum<double>(a, d);

     std::cout << "result: " << result << std::endl;

     return 0;
}