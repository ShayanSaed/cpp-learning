#include <iostream>

int main()
{
     auto add = []<typename T, typename P>(T a, P b)
     {
          return a + b;
     };

     int a{21};
     char b{'C'};

     auto result = add(a, b);
     std::cout << "result: " << result << std::endl;                 // 88
     std::cout << "sizeof(result): " << sizeof(result) << std::endl; // 4

     return 0;
}