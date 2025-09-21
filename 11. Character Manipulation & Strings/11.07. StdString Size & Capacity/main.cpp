#include <iostream>

int main()
{
     std::string str1{"Hello World"};
     std::string str2;
     std::string str3{};

     // Empty
     std::cout << "std::string::empty(): " << std::endl;
     std::cout << std::boolalpha;
     std::cout << "str1 is empty: " << str1.empty() << std::endl; // false
     std::cout << "str2 is empty: " << str2.empty() << std::endl; // true
     std::cout << "str3 is empty: " << str3.empty() << std::endl; // true

     std::cout << std::endl;

     // size
     std::cout << "std::string::size(): " << std::endl;
     std::cout << "str1 contains " << str1.size() << " characters" << std::endl; // 11
     std::cout << "str2 contains " << str2.size() << " characters" << std::endl; // 0
     std::cout << "str3 contains " << str3.size() << " characters" << std::endl; // 0

     std::cout << std::endl;

     // Length
     std::cout << "std::string::length(): " << std::endl;
     std::cout << "str1 contains " << str1.length() << " characters" << std::endl; // 11
     std::cout << "str2 contains " << str2.length() << " characters" << std::endl; // 0
     std::cout << "str3 contains " << str3.length() << " characters" << std::endl; // 0

     std::cout << std::endl;

     // max_size: max number of characters a string can have on the system
     // The output of max_size() can be different on each system
     std::cout << "std::string can hold " << str1.max_size() << " characters" << std::endl;

     std::cout << std::endl;

     // Capacity
     std::cout << "str1 capacity: " << str1.capacity() << std::endl; // 15
     std::cout << "str2 capacity: " << str2.capacity() << std::endl; // 15

     str1 = "The sky is so blue, the grass is green. Kids are running all over the place";

     std::cout << "str1 size: " << str1.size() << std::endl;         // 75
     std::cout << "str1 capacity: " << str1.capacity() << std::endl; // 75

     std::cout << std::endl;

     // Reserve: Update the capacity
     std::string str4{"Hello World"};

     std::cout << "str4 size: " << str4.size() << std::endl;         // 11
     std::cout << "str4 capacity: " << str4.capacity() << std::endl; // 15

     std::cout << std::endl;

     str4.reserve(100);

     std::cout << "str4 after reverse: " << str4 << std::endl;
     std::cout << "str4 size: " << str4.size() << std::endl;         // 11
     std::cout << "str4 capacity: " << str4.capacity() << std::endl; // 100

     std::cout << std::endl;

     // shrink_to_fit
     std::string str5{"Hello World"};

     str5.reserve(100);

     std::cout << "str5 size: " << str5.size() << std::endl;         // 11
     std::cout << "str5 capacity: " << str5.capacity() << std::endl; // 100

     str5.shrink_to_fit();

     std::cout << "str5 size: " << str5.size() << std::endl;         // 11
     std::cout << "str5 capacity: " << str5.capacity() << std::endl; // 15

     return 0;
}