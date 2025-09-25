#include <iostream>

// Declare an enum type
// The default type associated with enum classes with C++ is int
// unsigned char : 0 ~ 255
enum class Month : char
{
     Jan = 1,
     January = Jan,
     Feb,
     Mar,
     Apr,
     May,
     Jun,
     Jul,
     Aug,
     Sep = 20,
     Oct,
     Nov,
     Dec
};

int main()
{
     Month month{Month::Aug};

     std::cout << "month: " << static_cast<int>(month) << std::endl; // 8
     std::cout << "sizeof(month): " << sizeof(month) << std::endl;   // 1

     return 0;
}