#include <iostream>

int main()
{
     int int_data{91};
     double double_data{28};

     // References
     int &ref_int_data{int_data};
     double &ref_double_data{double_data};

     // Print stuff out
     std::cout << "int_data: " << int_data << std::endl;
     std::cout << "double_data: " << double_data << std::endl;

     std::cout << "&int_data: " << &int_data << std::endl;
     std::cout << "&double_data: " << &double_data << std::endl;

     std::cout << "----------------------------------------" << std::endl;

     std::cout << "ref_int_data: " << ref_int_data << std::endl;
     std::cout << "ref_double_data: " << ref_double_data << std::endl;

     std::cout << "&ref_int_data: " << &ref_int_data << std::endl;
     std::cout << "&ref_double_data: " << &ref_double_data << std::endl;

     std::cout << "-------------Values changed-------------" << std::endl;

     int_data = 139;
     double_data = 53.6;

     // Print stuff out
     std::cout << "int_data: " << int_data << std::endl;
     std::cout << "double_data: " << double_data << std::endl;

     std::cout << "&int_data: " << &int_data << std::endl;
     std::cout << "&double_data: " << &double_data << std::endl;

     std::cout << "----------------------------------------" << std::endl;

     std::cout << "ref_int_data: " << ref_int_data << std::endl;
     std::cout << "ref_double_data: " << ref_double_data << std::endl;

     std::cout << "&ref_int_data: " << &ref_int_data << std::endl;
     std::cout << "&ref_double_data: " << &ref_double_data << std::endl;

     std::cout << "-------------Values changed-------------" << std::endl;

     int_data = 1990;
     double_data = 2136.8;

     // Print stuff out
     std::cout << "int_data: " << int_data << std::endl;
     std::cout << "double_data: " << double_data << std::endl;

     std::cout << "&int_data: " << &int_data << std::endl;
     std::cout << "&double_data: " << &double_data << std::endl;

     std::cout << "----------------------------------------" << std::endl;

     std::cout << "ref_int_data: " << ref_int_data << std::endl;
     std::cout << "ref_double_data: " << ref_double_data << std::endl;

     std::cout << "&ref_int_data: " << &ref_int_data << std::endl;
     std::cout << "&ref_double_data: " << &ref_double_data << std::endl;

     return 0;
}