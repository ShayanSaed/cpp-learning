#include <iostream>

void sum(int a, int b)
{
     int sum = a + b;

     std::cout << "sizeof(a): " << sizeof(a) << std::endl;
     std::cout << "sizeof(b): " << sizeof(b) << std::endl;

     std::cout << "sizeof(int): " << sizeof(int) << std::endl;
     std::cout << "sizeof(double): " << sizeof(double) << std::endl;

     std::cout << "sum: " << sum << std::endl;

     std::cout << std::endl;
}

int main()
{
     int a{1}, b{2};
     double c{3}, d{4};

     sum(a, b);
     sum(c, d);

     return 0;
}