#include <iostream>

void say_age(int &age);

int main()
{
     int age{19};

     std::cout << "age (before call): " << age << " &age: " << &age << std::endl; // 19

     say_age(age);

     std::cout << "age (before call): " << age << " &age: " << &age << std::endl; // 20

     return 0;
}

void say_age(int &age)
{
     ++age;
     std::cout << "You're " << age << " years old! &age: " << &age << std::endl; // 20
}