#include <iostream>

int main()
{
     // Replacing
     /*
     // 1. Replace the range [pos, pos + count] with string
     std::string str1{"Finding Nemo"};
     std::string str2{"Searcing For"};

     std::cout << "str1: " << str1 << std::endl;

     std::cout << "Replacing..." << std::endl;
     str1.replace(0, 7, str2); // Replace 'Finding' with 'Searching For'

     std::cout << "str1: " << str1 << std::endl; // Searcing For Nemo
     */

     /*
     // 2. Replace in part of str, not its entirety
     std::string str3{"Finding Nemo"};
     std::string str4{"The Horse was Found in the Fields Searching For Food"};

     std::cout << "str3:" << str3 << std::endl;

     std::cout << "Replacing..." << std::endl;
     str3.replace(0, 7, str4, 34, 13); // Replace 'Finding' with 'Searching For'

     std::cout << "str3:" << str3 << std::endl; // Searching For Nemo
     */

     /*
     // Copying
     // Copy a subsection of *this string to dest. Dest is pre-allocated
     // The resulting character string is not null-terminated. Be careful!
     std::string str5{"Climbing Kirimanjaro"};
     char txt5[15]{}; // Initialized with zero equivalent for characters which is '\0'

     std::cout << "txt5: " << txt5 << std::endl;
     std::cout << "std::size(txt5): " << std::size(txt5) << std::endl; // 15

     std::cout << "Copying..." << std::endl;
     str5.copy(txt5, 11, 9); // Copying 'Kirimanjaro'

     // Safe to print because the char array was initialized with '\0' s.
     std::cout << "txt5: " << txt5 << std::endl; // Kirimanjaro
     */

     /*
     // Resizing
     std::string str6{"Hello"};

     std::cout << "null char: " << '\0' << std::endl;
     std::cout << "str6: " << str6 << std::endl;
     std::cout << "str6.size(): " << str6.size() << std::endl;
     std::cout << "str6.capacity(): " << str6.capacity() << std::endl;

     std::cout << std::endl;

     std::cout << "Resizing..." << std::endl;
     str6.resize(8); // This fills new char place holders with
                     // null character by default, you can't print and see them

     std::cout << std::endl;

     std::cout << "str6: " << str6 << std::endl;
     std::cout << "str6.size(): " << str6.size() << std::endl;
     std::cout << "str6.capacity(): " << str6.capacity() << std::endl;

     std::cout << std::endl;

     // Prove that they are indeed null characters
     std::cout << "Printing through loop: " << std::endl;
     for (size_t i{}; i < str6.size(); i++)
     {
          std::cout << i << ": " << str6[i] << std::endl;
     }

     std::cout << std::endl;

     // Resize and specify autofill character
     std::cout << "Resize and specify autofill character: " << std::endl;

     str6.resize(10, '*');
     std::cout << "str6: " << str6 << std::endl;                       // Hello**
     std::cout << "str6.size(): " << str6.size() << std::endl;         // 10
     std::cout << "str6.capacity(): " << str6.capacity() << std::endl; // 15

     std::cout << std::endl;

     // Resize down
     std::cout << "Resize down: " << std::endl;

     str6.resize(5);
     std::cout << "str6: " << str6 << std::endl;
     std::cout << "str6.size(): " << str6.size() << std::endl;
     std::cout << "str6.capacity(): " << str6.capacity() << std::endl;
     */

     /*
     // Swapping
     std::string str_a{"This is a string stored in A"};
     std::string str_b{"This is a string stored in B and it's really great to be able to do that."};

     // Before swap
     std::cout << "str_a: " << str_a << std::endl;
     std::cout << "str_b: " << str_b << std::endl;
     std::cout << "str_a.size():" << str_a.size() << std::endl;
     std::cout << "str_a.capaity(): " << str_a.capacity() << std::endl;
     std::cout << "str_b.size():" << str_b.size() << std::endl;
     std::cout << "str_b.capaity(): " << str_b.capacity() << std::endl;

     std::cout << std::endl;

     std::cout << "Swapping..." << std::endl;
     str_a.swap(str_b);

     std::cout << std::endl;

     // After swap
     std::cout << "str_a: " << str_a << std::endl;
     std::cout << "str_b: " << str_b << std::endl;
     std::cout << "str_a.size():" << str_a.size() << std::endl;
     std::cout << "str_a.capaity(): " << str_a.capacity() << std::endl;
     std::cout << "str_b.size():" << str_b.size() << std::endl;
     std::cout << "str_b.capaity(): " << str_b.capacity() << std::endl;
     */

     return 0;
}