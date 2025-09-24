#include <iostream>

void say_hello(const std::string &name);
void process_name(std::string_view name_sv);

int main()
{
     process_name("Shayan");

     return 0;
}

void say_hello(const std::string &name)
{
     std::cout << "Hello " << name << std::endl;
}

void process_name(std::string_view name_sv)
{
     // say_hello(name_sv); // ❌ Compiler error ❌
     // Implicit conversion from std::string_view
     // to std::string is not  allowed.

     // Fix: Be explicit about the conversion
     say_hello(std::string(name_sv));
}