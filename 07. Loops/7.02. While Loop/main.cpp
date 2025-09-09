#include <iostream>

int main()
{
     const size_t COUNT{10};
     size_t i{0}; // iterator declaration

     while (i < COUNT)
     {
          std::cout << i << ". I Love C++" << std::endl;

          ++i; // Incrementation
     }
     std::cout << "Loop done!" << std::endl;

     return 0;
}