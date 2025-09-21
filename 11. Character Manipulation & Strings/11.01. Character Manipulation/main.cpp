#include <iostream>

int main()
{
     /*
     // Check if character is alphanumberic
     std::cout << "C is alphanumberic: " << std::isalnum('C') << std::endl; // 1: true
     std::cout << "^ is alphanumberic: " << std::isalnum('^') << std::endl; // 0: false

     // Can use this as a input condition
     char input_char{'*'};
     if (std::isalnum(input_char))
     {
          std::cout << input_char << " is alphanumberic" << std::endl;
     }
     else
     {
          std::cout << input_char << " is not alphanumberic" << std::endl;
     }
     */

     /*
     // Check if character is alphabetic
     std::cout << "C is alphabetic: " << std::isalpha('C') << std::endl; // 1: true
     std::cout << "^ is alphabetic: " << std::isalpha('^') << std::endl; // 0: false
     std::cout << "3 is alphabetic: " << std::isalpha('3') << std::endl; // 0: false

     if (std::isalpha('C'))
     {
          std::cout << "C" << " is alphabetic" << std::endl;
     }
     else
     {
          std::cout << "C" << " is not alphabetic" << std::endl;
     }
     */

     /*
     // Check if a character is blank
     char message[]{"Hello there. How are you doing? The sun is shining."};
     std::cout << "message: " << message << std::endl;

     // Find and print blank index
     size_t blank_count{};
     for (size_t i{0}; i < std::size(message); i++)
     {
          if (std::isblank(message[i]))
          {
               std::cout << "Found a blank character at index: [" << i << "]" << std::endl;
               blank_count++;
          }
     }

     std::cout << "In total we found " << blank_count << " blank characters" << std::endl;
     */

     /*
     // Check if character is lowercase or uppercase
     char thought[]{"The C++ Programming Language is one of the most used on the Planet"};
     size_t upppercase_count{};
     size_t lowercase_count{};

     for (auto character : thought)
     {
          if (std::isupper(character))
          {
               ++upppercase_count;
          }

          if (std::islower(character))
          {
               ++lowercase_count;
          }
     }

     std::cout << "Found " << upppercase_count << " upppercase characters and " << lowercase_count << " lowercase characters." << std::endl;
     */

     /*
     // Check if a character is a digit
     char statement[]{"Mr Hamilton owns 221 cows. That's a lot of cows! The kid exclamed."};
     std::cout << "statement: " << statement << std::endl;

     size_t digit_count{};

     for (auto character : statement)
     {
          if (std::isdigit(character))
          {
               std::cout << "Found digit: " << character << std::endl;
               ++digit_count;
          }
     }

     std::cout << "Found " << digit_count << " digits in the statement string" << std::endl;
     */

     /*
     // Turning a character to lowercase or uppercase using the std::tolower() and std::toupper functions
     char original_str[]{"Home. The feeling of belonging"};
     char dest_str[std::size(original_str)];

     std::cout << "Original string: " << original_str << std::endl;

     // Turn to uppercase
     for (size_t i{0}; i < std::size(original_str); i++)
     {
          dest_str[i] = std::toupper(original_str[i]);
     }

     std::cout << "Uppercase string: " << dest_str << std::endl;

     // Turn to lowercase
     for (size_t i{0}; i < std::size(original_str); i++)
     {
          dest_str[i] = std::tolower(original_str[i]);
     }

     std::cout << "Lowercase string: " << dest_str << std::endl;
     */

     return 0;
}