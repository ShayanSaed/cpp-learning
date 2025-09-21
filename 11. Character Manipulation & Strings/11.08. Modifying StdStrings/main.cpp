#include <iostream>

int main()
{
     /*
     // Clear: Removes all characters from the string
     std::string str1{"The Lion Dad"};

     std::cout << "str1 is: " << str1 << std::endl;
     std::cout << "str1 size: " << str1.size() << std::endl;         // 12
     std::cout << "str1 capacity: " << str1.capacity() << std::endl; // 15

     str1.clear();

     std::cout << std::endl;

     std::cout << "str1 is: " << str1 << std::endl;
     std::cout << "str1 size: " << str1.size() << std::endl;         // 0
     std::cout << "str1 capacity: " << str1.capacity() << std::endl; // 15
     */

     /*
     // Inserts count characters in the string starting at index index
     std::string str2{"123"};

     std::cout << "str2: " << str2 << std::endl;

     str2.insert(1, 3, '4');

     std::cout << "str2: " << str2 << std::endl; // 144423
     */

     /*
     // Inserts null-terminated character string pointed to by s
     // at the position index. The length of the string is determined
     // by the first null character.
     std::string str3{"Hello!"};
     const char *txt3{" World"};

     std::cout << "str3: " << str3 << std::endl;

     str3.insert(5, txt3);

     std::cout << "str3: " << str3 << std::endl; // Hello World!
     */

     /*
     // Inserts the characters in the range(s, s+count) at the position index.
     // The range can contain null characters.
     std::string str4{"Hello!"};
     const char *txt4{" World Health Organization"};

     std::cout << "str4: " << str4 << std::endl;

     str4.insert(5, txt4, 6);

     std::cout << "str4: " << str4 << std::endl; // Hello World!
     */

     /*
     // Inserts string str at the position index
     std::string str5{" World"};
     std::string str6{"Hello!"};

     std::cout << "str6: " << str6 << std::endl;

     str6.insert(5, str5);

     std::cout << "str6 : " << str6 << std::endl; // Hello World!
     */

     /*
     // Inserts a string, obtained by str.substr(index_str, count) at the position index
     std::string str7{"Hello!"};
     std::string str8{"Statistical Analysis of the World Population."};

     std::cout << "str7: " << str7 << std::endl;

     str7.insert(5, str8, 27, 6);

     std::cout << "str7: " << str7 << std::endl; // Hello World!
     */

     /*
     // Erase
     // Starting at index index, erase count characters from the string
     // Notice that this function returns a referennce
     std::string str9{"Hello World is a message used to start off things when learning programming!"};

     str9.erase(11, str9.size() - 12);
     std::cout << "str9: " << str9 << std::endl; // Hello World!

     // Reset str9
     str9 = "Hello World is a message used to start off things when learning programming!";

     // Direct print out, Because this method returns a reference to the modified string
     std::cout << "str9: " << str9.erase(11, str9.size() - 12) << std::endl; // Hello World!
     */

     /*
     // push_back()
     // Appends the given character to the end of the string
     std::string str10{"Hello World"};

     str10.push_back('!');

     std::cout << "str10: " << str10 << std::endl; // Hello World!

     // pop_back()
     // Removes the last character from the string
     std::string str11{"Hello World!!"};

     str11.pop_back();

     std::cout << "str11: " << str11 << std::endl; // Hello World!
     */

     return 0;
}