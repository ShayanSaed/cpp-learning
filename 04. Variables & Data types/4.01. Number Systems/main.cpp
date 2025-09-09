#include <iostream>

int main()
{
     int number1 = 0b00001111; // Binary
     int number2 = 017; // Octal
     int number3 = 15; // Decimal
     int number4 = 0x0F; // Hexadecimal

     std::cout << "Number1(Binary): " << number1 << std::endl;
     std::cout << "Number2(Octal): " << number2 << std::endl;
     std::cout << "Number3(Decimal): " << number3 << std::endl;
     std::cout << "Number4(Hexadecimal): " << number4 << std::endl;

     return 0;
}