#include <iostream>

int main()
{
     /*
     const size_t size{10};

     // Different ways you can declare an array
     // dynamically and how they are initialized

     // salaries array will contain garbage values
     double *p_salaries{new double[size]};

     // All values initialized to 0
     int *p_students{new (std::nothrow) int[size]{}};

     double *p_scores{new (std::nothrow) double[size]{51, 73, 20, 64, 45}}; // Allocating memory space
                                                                            // for an array  of size double
                                                                            // vars. First 5 will be initialized
                                                                            // with 51, 73, 20, 64, 45, and the
                                                                            // rest will be 0's.

     // nullptr check and use the allocated array
     if (p_scores)
     {
          std::cout << "size of scores (it's a regular pointer): " << sizeof(p_scores) << std::endl;
          std::cout << "Successfully allocated memory for scores" << std::endl;

          // Print out elements. Can use regular array access notation, or pointer arithmetic
          for (size_t i{}; i < size; i++)
          {
               // You can print the values ​​using two methods: p_scores[i] and *(p_scores + i)
               std::cout << i << ". value: " << p_scores[i] << " | " << *(p_scores + i) << std::endl;
          }
     }

     delete[] p_salaries;
     p_salaries = nullptr;

     delete[] p_students;
     p_students = nullptr;

     delete[] p_scores;
     p_scores = nullptr;
     */

     /*
     // Static array
     int scores[10]{30, 47, 81, 65, 87, 94, 11, 43, 54, 23}; // Lives on the stack

     std::cout << "scores size: " << std::size(scores) << std::endl;

     for (auto score : scores)
     {
          std::cout << "value: " << score << std::endl;
     }

     // Dynamic array
     int *p_scores = new int[10]{30, 47, 81, 65, 87, 94, 11, 43, 54, 23}; // Lives on the heap

     // std::cout << "p_scores size: " << std::size(p_scores) << std::endl; // ❌ Error ❌
     // for (auto p_score : p_scores) // ❌ Error ❌
     // {
     //      std::cout << "value: " << p_score << std::endl;
     // }
     */

     return 0;
}