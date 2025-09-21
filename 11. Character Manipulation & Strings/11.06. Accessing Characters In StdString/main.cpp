#include <iostream>
#include <string>

int main()
{
     /*
     std::string str1{"Hello there"};

     // Size of a string: doesn't count the null terminator
     std::cout << "str1.size(): " << str1.size() << std::endl;

     // Reading characters in std::string : array index operator
     // Regular indexed loop. Can also be adapted to use while and do-while
     std::cout << "For loop with array index notation: " << std::endl;
     for (size_t i{}; i < str1.size(); i++)
     {
          std::cout << " " << str1[i];
     }
     */

     /*
     // Can also use range based for loop
     std::string str1{"Hello there"};

     std::cout << "Using range based for loop: " << std::endl;
     for (char value : str1)
     {
          std::cout << " " << value;
     }
     */

     /*
     // at() syntax to target characters
     std::string str1{"Hello there"};

     std::cout << "Using the std::string::at() method: " << std::endl;
     for (size_t i{}; i < str1.size(); i++)
     {
          std::cout << " " << str1.at(i);
     }
     */

     /*
     // Modifying with operator[] and at()
     std::string str1{"Hello there"};
     str1[0] = 'A';
     str1.at(1) = 'B';
     std::cout << "str1(modified): " << str1 << std::endl; // ABllo there
     */

     /*
     // Getting the front and back characters
     std::string str2{"The Phoenix King"};

     char &front_char = str2.front();
     char &back_char = str2.back();

     std::cout << "The front char in str2 is: " << front_char << std::endl; // T
     std::cout << "The back char in str2 is: " << back_char << std::endl;   // g

     front_char = 'P';
     back_char = 'm';

     std::cout << "str2: " << str2 << std::endl; // Phe Phoenix Kinm
     */

     /*
     // c_str method
     // returns const char * to the wrapped string. You shouldn't use
     // it to modify data in the string.
     std::string str2{"The Phoenix King"};

     const char *wrapped_c_string = str2.c_str();
     std::cout << "Wrapped c string: " << wrapped_c_string << std::endl;

     // wrapped_c_string[0] = 'S'; // compiler error
     */

     /*
     // data()
     std::string str1{"Hello there"};

     char *data = str1.data();
     std::cout << "Wrapped c string: " << data << std::endl; // Hello there

     data[0] = 'J'; // This also changes std::string

     std::cout << "Wrapped c string (after modification): " << data << std::endl; // Jello there
     std::cout << "Original string (after modification ):" << str1 << std::endl;  // Jello there
     */

     return 0;
}