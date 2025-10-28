#include <iostream>

size_t bus_count{0}; // Global Scope

int add_student()
{
     static int student_count{0}; // The scope of this variable is in add_student function,
                                  // but it's life time goes beyond the function execution.
     student_count++;
     ++bus_count;
     return student_count;
}

void do_something()
{
     // --student_count; // Compiler Error
     ++bus_count;
}

int main()
{
     for (size_t i{0}; i < 5; i++)
     {
          std::cout << "student count: " << add_student() << ", bus count: " << bus_count << std::endl; // 1, 2, 3, 4, 5
     }
}