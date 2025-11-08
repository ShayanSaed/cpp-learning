#include <iostream>
#include <cstring>

// Function template
template <typename T>
T maximum(T a, T b)
{
     std::cout << "Template overload called (T)" << std::endl;
     return (a > b) ? a : b;
}

// A raw overload will take precedence over any template instance
// if const char* is passed to maximum
const char *maximum(const char *a, const char *b)
{
     std::cout << "Raw overload called" << std::endl;
     return(std::strcmp(a, b) > 0) ? a : b;
}

// Overload through templates. Will take precedence over raw T
// if a pointer is passed to maximum
template <typename T>
T* maximum(T* a, T* b)
{
     std::cout << "Template overload called (T*)" << std::endl;
     return (*a > *b) ? a : b;
}

int main()
{
     /*
     const char * a{"Hello"}, * b{"World"};

     const char * result = maximum(a, b);
     std::cout << "result: " << result << std::endl; // World
     */

     /*
     int c{73}, d{8};

     auto result = maximum(&c, &d);
     std::cout << "result: " << *result << std::endl; // 73
     */

     return 0;
}