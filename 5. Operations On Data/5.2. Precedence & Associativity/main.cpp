#include <iostream>

int main()
{
     int a{6}, b{3}, c{8}, d{9}, e{3}, f{2}, g{5};

     int result = a + b * c - d / e - f + g;
     std::cout << "result: " << result << std::endl; // 30

     result = a / b * c + d - e + f;
     std::cout << "result: " << result << std::endl; // 24

     // With parentheses (to increase code readability)
     result = a + (b * c) - (d / e) - f + g;
     std::cout << "result: " << result << std::endl; // 30

     result = ((a / b) * c) + d - e + f;
     std::cout << "result: " << result << std::endl; // 24

     return 0;
}