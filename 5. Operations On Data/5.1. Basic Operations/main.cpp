#include <iostream>

int main(){
     int number1{2};
     int number2{7};

     // Addition
     int result = number1 + number2;
     std::cout << "result: " << result << std::endl; // 9

     // Subtraction
     result = number2 - number1;
     std::cout << "result: " << result << std::endl; // 5

     result = number1 - number2;
     std::cout << "result: " << result << std::endl; // -5

     // Multiplication
     result = number1 * number2;
     std::cout << "result: " << result << std::endl; // 14

     // Division
     result = number2 / number1;
     std::cout << "result: " << result << std::endl; // 3

     // Modulus
     result = number2 % number1;
     std::cout << "result: " << result << std::endl; // 1

     result = 31 % 10;
     std::cout << "result: " << result << std::endl; // 1

     return 0;
}