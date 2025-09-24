#include <iostream>

void say_age(int age) // Parameter
{
     ++age;

     std::cout << "You're " << age << " years old! &age: " << &age << std::endl; // 20, copied variable address
}

int main()
{
     int age{19}; // Local

     std::cout << "age (before call): " << age << " &age: " << &age << std::endl; // 19, local variable address

     say_age(age); // Argument

     std::cout << "age (after call): " << age << " &age: " << &age << std::endl; // 19, local variable address

     return 0;
}