#include <iostream>

int addNumbers(int first_param, int second_param)
{
     int result = first_param + second_param;
     return result;
}

int main()
{
     int first_number{13};
     int second_number{8};

     std::cout << "First Number: " << first_number << std::endl; // 13
     std::cout << "Second Number: " << second_number << std::endl; // 8

     int sum = first_number + second_number;
     std::cout << "Sum: " << sum << std::endl; // 21

     sum = addNumbers(21, 9);
     std::cout << "Sum: " << sum << std::endl; // 30

     std::cout << "Sum: " << addNumbers(19, 4) << std::endl; // 23

     return 0;
}