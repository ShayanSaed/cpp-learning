#include <iostream>
#include <iomanip>

int main(){
     // Declare and initialize the variables
     float number1 {1.12345678901234567890f}; // Precision: 7
     double number2 {1.12345678901234567890}; // Precision: 15
     long double number3 {1.12345678901234567890L};

     // Print out the sizes
     std::cout << "sizeof float: " << sizeof(float) << std::endl;
     std::cout << "sizeof double: " << sizeof(double) << std::endl;
     std::cout << "sizeof long double: " << sizeof(long double) << std::endl;

     // Precision
     std::cout << std::setprecision(20); // Control the precision from std::cout.
     std::cout << "number1 is: " << number1 << std::endl; // 7 digits
     std::cout << "number2 is: " << number2 << std::endl; // 15'ish digits
     std::cout << "number3 is: " << number3 << std::endl; // 15+ digits

     std::cout << "______________________________________" << std::endl;

     // Scientific notation
     double number4 {192400023};
     double number5 {1.92400023e8};
     double number6 {1.924e8};
     double number7 {0.00000000003498};
     double number8 {3.498e-11}; // Multiply with 10 exp(-11)

     std::cout << "number4 is: " << number4 << std::endl;
     std::cout << "number5 is: " << number5 << std::endl;
     std::cout << "number6 is: " << number6 << std::endl;
     std::cout << "number7 is: " << number7 << std::endl;
     std::cout << "number8 is: " << number8 << std::endl;

     return 0;
}