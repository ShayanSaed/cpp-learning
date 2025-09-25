#include <iostream>

int main()
{
     // typedef unsigned long long int HugeInt; // Older C++ syntax for type aliases

     using HugeINT = unsigned long long int; // Recommended in modern C++

     HugeINT huge_number{123456789};

     std::cout << "sizeof(unsigned long long int): " << sizeof(unsigned long long int) << std::endl; // 8
     std::cout << "sizeof(HugeINT): " << sizeof(HugeINT) << std::endl;                               // 8

     std::cout << "huge_number: " << huge_number << std::endl; // 123456789

     return 0;
}