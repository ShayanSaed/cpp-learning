#include <iostream>

int some_person_age{26};

void say_age(const int *const age);

int main()
{
     int age{19};

     std::cout << "age (before call): " << age << " &age: " << &age << std::endl;

     say_age(&age);

     std::cout << "age (after call): " << age << " &age: " << &age << std::endl;

     return 0;
}

void say_age(const int *const age) // constant pointer parameter
{
     // ++(*age); // ❌ Error: can not change constant pointer variable value ❌
     std::cout << "You're " << age << " years old! &age: " << &age << std::endl;
     // age = &some_person_age; // ❌ Error: Pointer points somewhere else ❌
}