#include <iostream>

int max(int a, int b);

int max(const int a, const int b)
{
     std::cout << "constant int max called" << std::endl;
     // ++a; // compiler error
     return (a > b) ? a : b;
}

int main()
{
     int x{15}, y{31};

     auto result = max(x, y); // constant int max called

     return 0;
}