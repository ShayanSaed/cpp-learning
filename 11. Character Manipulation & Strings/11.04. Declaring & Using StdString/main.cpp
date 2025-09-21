#include <iostream>
#include <string>

int main()
{
     std::string full_name;                              // Empty string
     std::string planet{"Earth. Where the sky is blue"}; // Initialize with string literal
     std::string prefered_planet{planet};                // Initialize with other existing string
     std::string message{"Hello there", 5};              // Initialize with part of a string literal. contains "Hello"
     std::string weird_message(4, 'z');                  // Initialize with multiple copies of a char, contains "zzzz"

     std::string greeting{"Hello World"};
     std::string say_hello{greeting, 6, 5}; // Initialize with part of an existing std::string
                                            // starting at index 6, taking 5 characters.
                                            // Will contain "World"

     std::cout << "full_name: " << full_name << std::endl;
     std::cout << "planet: " << planet << std::endl;
     std::cout << "prefered_planet: " << prefered_planet << std::endl;
     std::cout << "message: " << message << std::endl;
     std::cout << "weird_message: " << weird_message << std::endl;
     std::cout << "greeting: " << greeting << std::endl;
     std::cout << "saying_hello: " << say_hello << std::endl;

     // Changing std::string at runtime
     planet = "Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where ";
     std::cout << "planet: " << planet << std::endl;

     // Use a raw array
     const char *raw_array{"Writing code, is the starting point for simplifying complex things!"};
     raw_array = "Writing code is the starting point for simplifying complex things! But not necessarily always...";
     std::cout << "raw_array: " << raw_array << std::endl;

     return 0;
}