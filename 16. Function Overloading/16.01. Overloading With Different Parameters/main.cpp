#include <iostream>

int max(int a, int b)
{
     std::cout << "int overload called" << std::endl;
     return (a > b) ? a : b;
}

double max(double a, double b)
{
     std::cout << "double overload called" << std::endl;
     return (a > b) ? a : b;
}

double max(int a, double b)
{
     std::cout << "(int, double) overload called" << std::endl;
     return (a > b) ? a : b;
}

double max(double a, int b)
{
     std::cout << "(double, int) overload called" << std::endl;
     return (a > b) ? a : b;
}

double max(double a, int b, int c)
{
     std::cout << "(double, int, int) overload called" << std::endl;
     return a;
}

std::string_view max(std::string_view a, std::string_view b)
{
     std::cout << "(string_view,string_view) overload called" << std::endl;
     return (a > b) ? a : b;
}

int main()
{
     int x{5}, y{6};
     double a{10.5}, b{11.6};

     // auto result = max(x, y); // int overload called

     // auto result = max(a, b); // double overload called

     // auto result = max(x, a); // (int, double) overload called

     // auto result = max(b, y); // (double, int) overload called

     // auto result = max(a, x, y); // (double, int, int) overload called

     // max("Hello", "Shayan"); // (string_view,string_view) overload called

     return 0;
}