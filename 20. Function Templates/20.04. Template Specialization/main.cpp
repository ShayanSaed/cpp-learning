#include <iostream>
#include <cstring>

template <typename T>
T maximum(T a, T b)
{
     return (a > b) ? a : b;
}

template <>
const char *maximum<const char *>(const char *a, const char *b)
{
     return (std::strcmp(a, b) > 0) ? a : b;
}

int main()
{
     int a{18}, b{2};

     double c{53.5}, d{42.1};

     std::string e{"Hello"}, f{"World"};

     std::cout << "max(int): " << maximum(a, b) << std::endl;    // int version | 18
     std::cout << "max(double): " << maximum(c, d) << std::endl; // double version | 53.5
     std::cout << "max(string): " << maximum(e, f) << std::endl; // string version | World

     const char *g{"low level"}, *h{"language"};

     // This won't do what you would expect: BEWARE!
     std::cout << "max(const char *): " << maximum(g, h) << std::endl; // "const char *" version | low level

     return 0;
}