#include <iostream>
#include <string>
#include <cstring>

int main()
{
     std::string hello_str{"Hello"};
     std::string bello_str{"Bello"};

     /*
     // Using the comparison operators
     std::cout << "Comparing with comparison operators: " << std::endl;

     std::cout << std::boolalpha;
     std::cout << hello_str << "==" << bello_str << ": " << (hello_str == bello_str) << std::endl; // false
     std::cout << hello_str << "!=" << bello_str << ": " << (hello_str != bello_str) << std::endl; // true
     std::cout << hello_str << ">" << bello_str << ": " << (hello_str > bello_str) << std::endl;   // true
     std::cout << hello_str << ">=" << bello_str << ": " << (hello_str >= bello_str) << std::endl; // true
     std::cout << hello_str << "<" << bello_str << ": " << (hello_str < bello_str) << std::endl;   // false
     std::cout << hello_str << "<=" << bello_str << ": " << (hello_str <= bello_str) << std::endl; // false
     */

     /*
     // Can even compare std::strings to C-strings
     const char *c_string{"Bello"};
     hello_str = "Hello";

     std::cout << "hello_str.size(): " << hello_str.size() << std::endl;           // 5
     std::cout << "std::strlen(c_string): " << std::strlen(c_string) << std::endl; // 5

     std::cout << std::endl;

     std::cout << std::boolalpha;
     std::cout << hello_str << "==" << c_string << " (C-String): " << (hello_str == c_string) << std::endl;  // false
     std::cout << c_string << " (C-String) ==" << hello_str << ": " << (c_string == hello_str) << std::endl; // false
     std::cout << c_string << " (C-String) >=" << hello_str << ": " << (c_string >= hello_str) << std::endl; // false
     std::cout << c_string << " (C-String) <" << hello_str << ": " << (c_string < hello_str) << std::endl;   // true
     */

     /*
     // Be careful about char arrays not terminated with null character
     hello_str = "hello";
     // The compiler is going to read past the string
     // until it sees a null character and consider that
     // end of the string. Your comparisons may give
     // erronous results
     // const char hello_char_array[]{'h', 'e', 'l', 'l', 'o'};

     const char hello_char_array[]{'h', 'e', 'l', 'l', 'o', '\0'}; // It works right if you put the '\' yourself

     std::cout << std::boolalpha;
     std::cout << hello_str << " == hello_char_array: " << (hello_str == hello_char_array) << std::endl; // true
     */

     return 0;
}