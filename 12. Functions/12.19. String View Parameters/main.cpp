#include <iostream>

void say_hello(std::string_view name)
{
     std::cout << "Hello " << name << std::endl;
}

int main()
{
     // Pass string in diffrent ways
     std::string name{"Shayan"};
     say_hello(name);

     say_hello("Parsa");

     say_hello(std::string_view("Akam"));

     return 0;
}