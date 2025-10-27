#include <iostream>

int main()
{
     /*
     Lambda function signature :
                              [capture list] (parameters) ->return type{
                                        // Function body
                              }
     */

     // Declaring a lambda function and calling it through a name
     /*
     auto func = []()
     {
          std::cout << "declare call lambda function" << std::endl;
     };

     func(); // calling lambda function
     */

     // Declare a lambda function and call it directly
     /*
     []()
     {
          std::cout << "call lambda function directly" << std::endl;
     }();
     */

     // Lambda function that takes parameters
     /*
     [](double a, double b)
     {
          std::cout << "a + b: " << (a + b) << std::endl;
     }(9.8, 27.1);

     auto func1 = [](double a, double b)
     {
          std::cout << "a + b: " << (a + b) << std::endl;
     };

     func1(3.7, 80.1);
     */

     // Lambda function that returns something
     /*
     auto func2 = [](double a, double b)
     {
          return a + b;
     }(12.6, 7.1);

     std::cout << "func2 : " << func2 << std::endl;
     */

     // Print result directly
     /*
     std::cout << "result: " << [](double a, double b)
     {
          return a + b;
     }(33.4, 19.9)
               << std::endl;
     */

     // Ways to use a lambda function
     /*
     auto func3 = [](double a, double b)
     {
          return a + b;
     };

     auto result1 = func3(11.1, 2.8);
     auto result2 = func3(29.5, 34.9);

     std::cout << "result1: " << result1 << std::endl;
     std::cout << "result2: " << result2 << std::endl;

     std::cout << "direct call: " << func3(1.3, 8.5) << std::endl;
     */

     // Explicitly specify the return type
     /*
     auto func4 = [](double a, double b){
          return a + b;
     };

     auto func5 = [](double a, double b) -> int {
          return a + b;
     };

     double a{22.4}, b{6.8};

     auto result3 = func4(a , b);
     auto result4 = func5(a , b);

     std::cout << "result3: " << result3 << std::endl; // 29.2
     std::cout << "result4: " << result4 << std::endl; // 29

     std::cout << "sizeof(result3): " << sizeof(result3) << std::endl; // 8
     std::cout << "sizeof(result4): " << sizeof(result4) << std::endl; // 4
     */

     return 0;
}