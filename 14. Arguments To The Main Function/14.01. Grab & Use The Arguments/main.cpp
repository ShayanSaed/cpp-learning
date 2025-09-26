#include <iostream>

int main(int argc, char *argv[]) // argc: Arguments count
{

     /*
     Command: .\rooster.exe option1 option2

     Program output:
     We have 3 parameters in our program
     parameter [0]:C:\...\cpp course\14. Arguments To The Main Function\14.01. Grab & Use The Arguments\rooster.exe
     parameter [1]:option1
     parameter [2]:option2
     */

     std::cout << "We have " << argc << " parameters in our program" << std::endl;

     for (size_t i{}; i < argc; i++)
     {
          std::cout << "parameter [" << i << "]:" << argv[i] << std::endl;
     }

     return 0;
}