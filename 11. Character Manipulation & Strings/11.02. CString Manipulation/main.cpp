#include <iostream>
#include <cstring>

int main()
{
     /*
     // std::strlen: Find the length of a string
     // real arrays and those decayed into pointers
     const char message1[]{"The sky is blue."};

     // Array decays into pointer when we use const char*
     const char *message2{"The sky is blue."};

     // strlen ignores null character
     std::cout << "strlen(message1): " << std::strlen(message1) << std::endl; // 16

     // Includes the null character
     std::cout << "sizeof(message1): " << sizeof(message1) << std::endl; // 17

     // strlen still works with decayed arrays
     std::cout << "strlen(message2): " << std::strlen(message2) << std::endl; // 16

     // Prints size of pointer
     std::cout << "sizeof(message2): " << sizeof(message2) << std::endl; // 8
     */

     /*
     // std::strcmp - signature : int strcmp( const char *lhs, const char *rhs );
     // Returns negative value if lhs appears before rhs in lexicographical order,
     // Zero if lhs and rhs compare equal.
     // and Positive value if lhs appears after rhs in lexicographical order.
     const char *string_data1{"Alabama"};
     const char *string_data2{"Blabama"};

     char string_data3[]{"Alabama"};
     char string_data4[]{"Blabama"};

     // Print out the comparison
     std::cout << "std::strcmp(" << string_data1 << ", " << string_data2 << "): "
               << std::strcmp(string_data1, string_data2) << std::endl; // -1

     std::cout << "std::strcmp(" << string_data3 << ", " << string_data4 << "): "
               << std::strcmp(string_data3, string_data4) << std::endl; // -1

     string_data1 = "Kigali";
     string_data2 = "Kigali";

     std::cout << "std::strcmp(" << string_data1 << ", " << string_data2 << "): "
               << std::strcmp(string_data1, string_data2) << std::endl; // 0
     */

     /*
     // std::strncmp : int strncmp( const char *lhs, const char *rhs, std::size_t count );
     // Compares n characters in the strings
     // Returns : Negative value if lhs appears before rhs in lexicographical order.
     // Zero if lhs and rhs compare equal, or if count is zero.
     // Positive value if lhs appears after rhs in lexicographical order.

     const char *string_data1{"Alabama"};
     const char *string_data2{"Blabama"};
     size_t n{3};

     std::cout << "std::strncmp(" << string_data1 << ", " << string_data2 << ", " << n << "): "
               << std::strncmp(string_data1, string_data2, n) << std::endl; // -1

     string_data1 = "aaabc";
     string_data2 = "aaabcd";

     std::cout << "std::strncmp(" << string_data1 << ", " << string_data2 << ", " << n << "): "
               << std::strncmp(string_data1, string_data2, n) << std::endl; // 0

     n = 5;

     std::cout << "std::strncmp(" << string_data1 << ", " << string_data2 << ", " << n << "): "
               << std::strncmp(string_data1, string_data2, n) << std::endl;
     */

     /*
     // Find the first occurrence of a character
     // document: https://en.cppreference.com/w/cpp/string/byte/strchr

     // we use std::strchr to find all the characters one by one.

     const char *const str{"Try not. Do, or do not. There is no try."};
     // Can make this a const pointer to prevent users from making it point somewhere else
     char target = 'T';
     const char *result = str;
     size_t iterations{};

     while ((result = std::strchr(result, target)) != nullptr)
     {
          std::cout << "Found: " << target << " starting at " << result << std::endl;

          // Increment result, otherwise we'll find target at the same location
          ++result;
          ++iterations;
     }

     // std::cout << "iterations: " << iterations << std::endl;

     // Program output:
     // Found: T starting at Try not. Do, or do not. There is no try.
     // Found: T starting at There is no try.
     // iterations: 2

     // Find last occurence using std::strrchr()
     char input[] = "/home/user/hello.cpp";
     char *output = std::strrchr(input, '/');
     if (output)
     {
          std::cout << output + 1 << std::endl; //+1 because we want to start printing past
                                                // the character found by std::strrchr.
     }

     // Program output:
     // hello.cpp
     */

     return 0;
}