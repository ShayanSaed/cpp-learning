#include <iostream>

int main()
{
     /*
     // Compare two string
     std::string str1{"Hello"};
     std::string str2{"World"};

     std::cout << "str1: " << str1 << std::endl;
     std::cout << "str2: " << str2 << std::endl;

     std::cout << std::endl;

     std::cout << "str1.compare(str2): " << str1.compare(str2) << std::endl; // negative
     std::cout << "str2.compare(str1): " << str2.compare(str1) << std::endl; // positive
     */

     /*
     // Compares a substring of this string(from pos1, going count1 positions) to another string
     std::string str3{"Hello"};
     std::string str4{"Hello World"};

     std::cout << "Comparing 'World' to 'Hello': " << str4.compare(6, 5, str3) << std::endl; // positive
     */

     /*
     // Compares this string to the null-terminated character sequence beginning
     // at the character pointed to by s.
     std::string str5{"Hello"};
     const char *message{"World"};
     std::cout << "Comparing 'Hello' to 'World' : " << str5.compare(message) << std::endl; // negative
     std::cout << "Comparing 'Hello' to 'World' : " << str5.compare("World") << std::endl; // negative
     */

     return 0;
}