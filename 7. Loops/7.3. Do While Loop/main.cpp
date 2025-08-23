#include <iostream>

int main()
{
     const int COUNT{10};
     size_t i{0}; // iterator declaration

     do
     {
          std::cout << i << ". I Love C++" << std::endl;

          ++i; // Incrementation
     } while (i < COUNT);

     std::cout << "Loop done!" << std::endl;

     return 0;
}