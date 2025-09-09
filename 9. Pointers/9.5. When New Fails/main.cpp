#include <iostream>

int main()
{
     // int *data = new int[1000000000000000];

     /*
     for (size_t i{0}; i < 10000000; i++)
     {
          int *data = new int[10000000];
     }
     */

     // exception

     // 🛑 Do not run this code 🛑
     /*
     for (size_t i{0}; i < 10000000; i++)
     {
          try
          {
               int *data = new int[10000000];
          }
          catch (const std::exception &e)
          {
               std::cerr << "something went wrong: " << e.what() << std::endl;
          }
     }
     */

     // std::nothrow

     // 🛑 Do not run this code 🛑
     /*
     for (size_t i{0}; i < 10000000; i++)
     {
          int *data = new (std::nothrow) int[10000000];

          if (data != nullptr)
          {
               std::cout << "Data allocated" << std::endl;
          }
          else
          {
               std::cout << "Data allocation failed" << std::endl;
          }
     }
     */

     std::cout << "Program ending well!" << std::endl;

     return 0;
}