#include <iostream>

// Function that takes a single parameter, and doesn't
// give back the result explicitly
void driving(size_t age) // Functions parameters
{
     if (age > 18)
     {
          std::cout << "You're " << age << " years old, you can drive!" << std::endl;
     }
     else
     {
          std::cout << "You're not old enough to drive a car." << std::endl;
     }
}

// Function that takes multiple parameters and returns the result of the computation
int max(int a, int b)
{
     if (a > b)
          return a;
     else
          return b;
}

// Function that doesnt' take parameters and returns nothing
void say_hello()
{
     std::cout << "Hello there!" << std::endl;
     // You could omit this return statement for functions returning void
     return;
}

// Function that takes no parameters and return something
int birth_of_cpp()
{
     return 1979;
}

// Parameters passed this way are scoped localy in the function.
// Changes to them are not visible outside the function. What we
// have inside the function are actually COPIES of the arguments
// passed to the function.
double increment_multiply(double a, double b)
{
     std::cout << "Inside function, before increment : " << std::endl;
     std::cout << "a: " << a << std::endl;
     std::cout << "b: " << b << std::endl;

     double result = ((++a) * (++b));

     std::cout << "Inside function, after increment : " << std::endl;
     std::cout << "a: " << a << std::endl;
     std::cout << "b: " << b << std::endl;

     // Returning the result
     return result;
}

int main()
{
     /*
     // Calling driving
     driving(16); // Function arguments
     driving(22);
     */

     /*
     // //Calling max
     int x{41}, y{98};

     int result = max(x, y);                                // Arguments
     std::cout << "max number is: " << result << std::endl; // 98

     result = max(65, 14);
     std::cout << "max number is: " << result << std::endl; // 65
     */

     /*
     // Calling say_hello
     say_hello();
     */

     /*
     // Calling birth_of_cpp
     std::cout << "In " << birth_of_cpp() << ", Bjarne Stroustrup, a Danish computer scientist, began work on C with Classes, the predecessor to C++." << std::endl;
     */

     /*
     // Calling increment_multiply
     double first_double{12.00}, second_double{7.00};

     std::cout << "Outside function, before increment : " << std::endl;
     std::cout << "fifirst_double: " << first_double << std::endl;
     std::cout << "seconsecond_double: " << second_double << std::endl;

     double incr_mult_result = increment_multiply(first_double, second_double);

     std::cout << "Outside function, after increment : " << std::endl;
     std::cout << "fifirst_double: " << first_double << std::endl;
     std::cout << "seconsecond_double: " << second_double << std::endl;
     */

     return 0;
}