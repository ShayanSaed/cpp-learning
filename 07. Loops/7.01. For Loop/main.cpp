#include <iostream>

int main()
{
     // for loop
     /*
     for (unsigned int i{0}; i < 10; ++i)
     {
          // loop body
          std::cout << i << ". I Love C++" << std::endl;
     }
     std::cout << "Loop done!" << std::endl;
     */

     // Use size_t: a representation of some unsigned int for positive numbers [sizes]
     /*
     for (size_t i{0}; i < 10; ++i)
     {
          std::cout << i << ". I Love C++" << std::endl;
     }
     std::cout << "Loop done!" << std::endl;
     */

     // sizeof(size_t)
     // std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl;

     // Iterator declared outside the loop
     /*
     size_t i{0};

     for (i; i < 10; i++)
     {
          std::cout << i << ". I Love C++" << std::endl;
     }
     std::cout << "Loop done!" << std::endl;
     std::cout << "i: " << i << std::endl;
     */

     return 0;
}