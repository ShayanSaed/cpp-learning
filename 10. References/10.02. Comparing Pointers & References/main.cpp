#include <iostream>

int main()
{
     // Declare pointer and reference
     double double_value{20.71};
     double &ref_double_value{double_value}; // Reference to double_value
     double *p_double_value{&double_value};  // Pointer to double_value

     // Reading
     std::cout << "double_value: " << double_value << std::endl;
     std::cout << "ref_double_value: " << ref_double_value << std::endl;
     std::cout << "p_double_value: " << p_double_value << std::endl;
     std::cout << "*p_double_value: " << *p_double_value << std::endl;

     std::cout << std::endl;

     // Writting
     ref_double_value = 22.45;
     *p_double_value = 22.45;

     std::cout << "double_value: " << double_value << std::endl;
     std::cout << "ref_double_value: " << ref_double_value << std::endl;
     std::cout << "p_double_value: " << p_double_value << std::endl;
     std::cout << "*p_double_value: " << *p_double_value << std::endl;

     std::cout << std::endl;

     //________________________________________________________________

     double some_other_double{64.28};

     // Make the reference reference something else
     ref_double_value = some_other_double;

     // Make the pointer point to something else
     p_double_value = &some_other_double;

     std::cout << "double_value: " << double_value << std::endl;
     std::cout << "ref_double_value: " << ref_double_value << std::endl;
     std::cout << "&double_value: " << &double_value << std::endl;
     std::cout << "&ref_double_value: " << &ref_double_value << std::endl;
     std::cout << "p_double_value: " << p_double_value << std::endl;
     std::cout << "*p_double_value: " << *p_double_value << std::endl;

     std::cout << std::endl;

     *p_double_value = 386.1;

     std::cout << "double_value: " << double_value << std::endl;
     std::cout << "ref_double_value: " << ref_double_value << std::endl;
     std::cout << "&double_value: " << &double_value << std::endl;
     std::cout << "&ref_double_value: " << &ref_double_value << std::endl;
     std::cout << "p_double_value: " << p_double_value << std::endl;
     std::cout << "*p_double_value: " << *p_double_value << std::endl;

     return 0;
}