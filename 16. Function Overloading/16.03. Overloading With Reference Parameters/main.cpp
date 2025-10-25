#include <iostream>
#include <string>

// Ambiguous calls
void say_my_name(const std::string &name)
{
     std::cout << "Your name is (reference): " << name << std::endl;
}

void say_my_name(std::string name)
{
     std::cout << "Your name is (non reference): " << name << std::endl;
}

// Implicit conversions with references
double max(double a, double b)
{
     std::cout << "double max called" << std::endl;
     return (a > b) ? a : b;
}

// int& max(int& a, int& b)
const int &max(const int &a, const int &b)
{
     std::cout << "int max called" << std::endl;
     return (a > b) ? a : b;
}

int main()
{
     std::string user_name{"Shayan"};

     char a{20}, b{8};

     // say_my_name(user_name); // Ambiguous

     auto result = max(a, b); // int max called

     return 0;
}