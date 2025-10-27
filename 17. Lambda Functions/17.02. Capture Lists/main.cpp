#include <iostream>

int main()
{
     // Capture lists
     /*
     double a{12}, b{7};

     auto func = [a, b]() {
          std::cout << "a + b: " << a + b << std::endl;
     };

     func(); // 19
     */

     // Capturing by value
     /*
     int c{95};

     auto func = [c]()
     {
          std::cout << "Inner value: " << c << " &inner: " << &c << std::endl;
     };

     for (size_t i{0}; i < 5; i++)
     {
          std::cout << "Outer value: " << c << " &outer: " << &c << std::endl;
          func();
          ++c;
     }
     */

     // Capturing by reference
     /*
     int d{95};

     auto func = [&d]()
     {
          std::cout << "Inner value: " << d << " &inner: " << &d << std::endl;
     };

     for (size_t i{0}; i < 5; i++)
     {
          std::cout << "Outer value: " << d << " &outer: " << &d << std::endl;
          func();
          ++d;
     }
     */

     return 0;
}