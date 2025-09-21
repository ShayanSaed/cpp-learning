#include <iostream>
#include <cstring>

int main()
{
     /*
     // Concatenation
     char dest[50] = "Hello ";
     char src[50] = "World!";

     std::strcat(dest, src);                     // Some compilers (MSVC) think these functions are unsafe!
     std::cout << "dest: " << dest << std::endl; // Hello World!

     std::strcat(dest, " Goodbye World!");
     std::cout << "dest: " << dest << std::endl; // Hello World! Goodbye World!

     // -----------------------------------------------------------------

     char *dest1 = new char[30]{'F', 'i', 'r', 'e', 'l', 'o', 'r', 'd', '\0'};
     char *src1 = new char[30]{',', 'T', 'h', 'e', ' ', 'P', 'h', 'e', 'n', 'i', 'x', ' ', 'K', 'i', 'n', 'g', '!', '\0'};

     // Describe what's going to happen in std::strcat before you do the cat :
     // source is going to be appended to dest, and the process
     // will start by overriding the null character in dest

     std::cout << "std::strlen(dest1): " << std::strlen(dest1) << std::endl;
     std::cout << "std::strlen(src1): " << std::strlen(src1) << std::endl;

     std::cout << "Concatenation" << std::endl;
     std::strcat(dest1, src1);

     std::cout << "std::strlen(dest1): " << std::strlen(dest1) << std::endl;
     std::cout << "dest1: " << dest1 << std::endl;
     */

     /*
     // std::strncat  : concatenates n characters from src to dest and
     // returns a pointer to the result string
     // signature : char *strncat( char *dest, const char *src, std::size_t count );
     char dest2[50]{"Hello"};
     char src2[30]{" There is a bird on my window"};

     // You can even use the returned pointer immediately for print out
     // This is a pattern you'll see a lot in C++ code out there.
     std::cout << std::strncat(dest2, src2, 6) << std::endl; // Hello There

     // Or you can do std::strncat separately and print dest2
     std::strncat(dest2, src2, 6);
     std::cout << "The concatenated string is: " << dest2 << std::endl; // Hello There There
     */

     /*
     // std::strcpy - signature: char* strcpy( char* dest, const char* src );
     const char *src3 = "C++ is a multipurpose programming language.";
     char *dest3 = new char[std::strlen(src3) + 1]; // +1 for the null character
                                                    // Contains garbage data
                                                    // Not initialized

     std::strcpy(dest3, src3);

     std::cout << "sizeof(dest3): " << sizeof(dest3) << std::endl;
     std::cout << "std::strlen(dest3): " << std::strlen(dest3) << std::endl;
     std::cout << "dest3: " << dest3 << std::endl;
     */

     /*
     // std::strncpy: Copy n characters from src to dest -
     // signature: char *strncpy( char *dest, const char *src, std::size_t count );
     const char *src4 = "Hello";
     char dest4[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'}; // Have to put the terminating
                                                          // null char if we want to print

     std::cout << "dest4: " << dest4 << std::endl;

     std::cout << "Copying" << std::endl;
     std::strncpy(dest4, src4, 5);

     std::cout << "dest4: " << dest4 << std::endl; // Hellof
     */

     return 0;
}