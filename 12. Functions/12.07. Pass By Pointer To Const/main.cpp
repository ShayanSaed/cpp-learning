#include <iostream>

void say_age(const int *age);

int main()
{
     int age{19};

     std::cout << "age (before call): " << age << " &age: " << &age << std::endl;

     say_age(&age);

     std::cout << "age (after call): " << age << " &age: " << &age << std::endl;

     return 0;
}

void say_age(const int *age) // constant pointer parameter
{
     // ++(*age); // ❌ Error: can not change constant pointer variable value ❌
     std::cout << "You're " << age << " years old! &age: " << &age << std::endl;
}