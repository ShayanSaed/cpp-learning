#include <iostream>

int main()
{
     // Capture everything by value
     /*
     int a{28};

     auto func = [=]()
     {
          std::cout << "Inner value: " << a << std::endl;
     };

     for (size_t i{0}; i < 5; i++)
     {
          std::cout << "Outer value: " << a << std::endl;
          func();
          ++a;
     }
     */

     // Capturing all reference
     /*
     int b{2}, c{63};

     auto func = [&]()
     {
          std::cout << "Inner value(b): " << b << std::endl;
          std::cout << "Inner value(c): " << c << std::endl;
     };

     for (size_t i{0}; i < 5; i++)
     {
          std::cout << "Outer value(b): " << b << std::endl;
          func();
          ++b;
     }
     */

     return 0;
}