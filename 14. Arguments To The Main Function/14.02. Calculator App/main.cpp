#include <iostream>
#include <cstdlib>
#include <cstring>

int main(int argc, char **argv)
{
     // Parameters validation
     if (argc != 4)
     {
          std::cerr << "Program can only be called with 3 arguments like: " << std::endl;
          std::cerr << "./rooster.exe number + number" << std::endl;
          std::cerr << "You called with: ";
          for (size_t i{}; i < argc; i++)
          {
               std::cout << " " << argv[i];
          }

          std::cout << std::endl;

          return 0; // Close the program
     }

     // Grab the operands
     // Convert char to double
     double first_number{atof(argv[1])};
     double second_number{atof(argv[3])};

     if ((first_number == 0.0) || (second_number == 0.0))
     {
          std::cout << "Please use valid numbers(different from zero) for first and second parameters" << std::endl;
          return 0;
     }

     // Grab the operation
     const char *operation_argument{argv[2]};
     char operation;

     // x is for multiplication. * is interpreted
     // by the shell and disturbing things.
     if ((std::strlen(operation_argument) == 1) &&
         ((operation_argument[0] == '+') ||
          (operation_argument[0] == '-') ||
          (operation_argument[0] == '/') ||
          (operation_argument[0] == 'x')))
     {
          operation = operation_argument[0];
     }
     else
     {
          std::cerr << operation << " is not a valid operation." << std::endl;
          return 0;
     }

     // The operation
     switch (operation)
     {
     case '+':
          std::cout << first_number << " + " << second_number << " = "
                    << first_number + second_number << std::endl;
          break;

     case '-':
          std::cout << first_number << " - " << second_number << " = "
                    << first_number - second_number << std::endl;
          break;

     case '/':
          std::cout << first_number << " / " << second_number << " = "
                    << first_number / second_number << std::endl;
          break;

     case 'x':
          std::cout << first_number << " * " << second_number << " = "
                    << first_number * second_number << std::endl;
          break;
     }

     return 0;
}