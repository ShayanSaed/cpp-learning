#include <iostream>
#include <string_view>
#include <cstring>

int main()
{
     /*
     // The problem
     std::string str{"Hello"};
     std::string copy_str1{str}; // copy
     std::string copy_str2{str}; // copy

     std::cout << "address of str: " << &str << std::endl;
     std::cout << "address of copy_str1: " << &copy_str1 << std::endl;
     std::cout << "address of copy_str2: " << &copy_str2 << std::endl;
     */

     /*
     // Using string_view
     std::string_view sv{"Hello"};
     std::string_view sv1{sv};  // View viewing the hello literal
     std::string_view sv2{sv1}; // Another view viewing hello

     std::cout << "Size of string_view: " << sizeof(std::string_view) << std::endl; // 16
     std::cout << "Size of sv1: " << sizeof(sv1) << std::endl;                      // 16

     std::cout << "sv: " << sv << std::endl;
     std::cout << "sv1: " << sv1 << std::endl;
     std::cout << "sv2: " << sv2 << std::endl;
     */

     /*
     // Constructing string_view's
     std::string str{"Regular std::string"};
     const char *c_string{"Regular C-String"};
     const char char_array[]{"Char array"};  // Null terminated
     char char_array2[]{'H', 'u', 'g', 'e'}; // Non null terminated char array

     std::string_view sv3{"String litteral"};
     std::string_view sv4{str};
     std::string_view sv5{c_string};
     std::string_view sv6{char_array};
     std::string_view sv7{sv3};
     std::string_view sv8{char_array2, std::size(char_array2)}; // Non null terminated char array
                                                                // Need to pass in size info

     std::cout << "sv3: " << sv3 << std::endl;
     std::cout << "sv4: " << sv4 << std::endl;
     std::cout << "sv5: " << sv5 << std::endl;
     std::cout << "sv6: " << sv6 << std::endl;
     std::cout << "sv7 (constructed from other string_view): " << sv7 << std::endl;
     std::cout << "Non null terminated string with std::string_view: " << sv8 << std::endl;
     */

     /*
     // Changes to the original string are reflected in the string_view
     char word[]{"Dog"};
     std::string_view sv9{word};

     std::cout << "word: " << sv9 << std::endl;

     std::cout << "Changing data" << std::endl;
     // Change the data
     word[2] = 't';

     std::cout << "word: " << sv9 << std::endl; // Dot
     */

     /*
     // Changing the view window: SHRINKING
     const char *c_string{"The animals have left the region"};
     std::string_view sv10{c_string};

     std::cout << "sv10: " << sv10 << std::endl;

     sv10.remove_prefix(4); // Removes "The"

     std::cout << "View with removed prefix(4): " << sv10 << std::endl; // animals have left the region

     sv10.remove_suffix(10); // Removes "the region"

     std::cout << "View with removed suffix(10): " << sv10 << std::endl; // animals have left

     // Changing the view doesn't change the viewed string
     std::cout << "Original sv10 viewed string: " << c_string << std::endl;
     */

     /*
     // String_view shouldn't outlive whatever it is viewing
     std::string_view sv11;

     {
          std::string string{"Hello there"};
          sv11 = string;
          std::cout << "INSIDE --- sv11 is viewing: " << sv11 << std::endl;

          // string goes out of scope here
     }
     std::cout << "OUTSIDE --- sv11 is viewing: " << sv11 << std::endl;
     */

     /*
     // data
     std::string_view sv12{"Ticket"};
     std::cout << "sv12: " << sv12 << std::endl;
     std::cout << "std::strlen(sv12.data()): " << std::strlen(sv12.data()) << std::endl; // 6
     */

     /*
     // Don't use data() on a modified view (through remove_prefix or remove_suffix)
     std::string_view sv13{"Ticket"};
     sv13.remove_prefix(2);
     sv13.remove_suffix(2);

     // Length info is lost when you modify the view
     std::cout << sv13 << " has " << std::strlen(sv13.data()) << " characters(s)" << std::endl; // 4
     std::cout << "sv13.data() is " << sv13.data() << std::endl;                                // cket
     std::cout << "sv13 is " << sv13 << std::endl;                                              // ck
     */

     /*
     // Don't view non null terminated strings
     char char_array[]{'H', 'e', 'l', 'l', 'o'};
     std::string_view sv14{char_array, std::size(char_array)};

     std::cout << sv14 << " has " << std::strlen(sv14.data()) << " characters(s)" << std::endl; // 14
     std::cout << "sv14.data is : " << sv14.data() << std::endl;                                // "Hello" + random characters
     std::cout << "sv14 is: " << sv14 << std::endl;                                             // Hello
     */

     /*
     // std::string behaviors
     std::string_view sv15{"There is a huge forest in that area"};

     std::cout << "sv15 is " << sv15.length() << " characters long" << std::endl; // 35
     std::cout << "The front character is: " << sv15.front() << std::endl;        // T
     std::cout << "The back character is: " << sv15.back() << std::endl;          // a
     std::cout << "Substring: " << sv15.substr(0, 22) << std::endl;               // There is a huge forest
     */

     return 0;
}