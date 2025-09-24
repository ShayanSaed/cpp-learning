#include <iostream>

// Marking a function as constexpr gives it the potential
// to be evaluated at compile time
constexpr int get_value(int multiplier)
{
     return multiplier * 3;
}

int main()
{
     /*
     int some_var{5};                  // Run time variable
     int result = get_value(some_var); // Run time
     std::cout << "result: " << result << std::endl;
     */

     // For the evaluation to take place at compile time,
     // we have to remember to store the return value
     // in a constexpr result variable
     constexpr int result = get_value(4); // Compile time
     std::cout << "result: " << result << std::endl;

     return 0;
}