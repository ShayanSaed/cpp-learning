#include <iostream>

// Also can get parameters like this
/*
template <typename T>
bool is_valid(T collection[], int threshold, size_t size)
*/

template <int threshold, typename T>
bool is_valid(T collection[], size_t size)
{
     T sum{0};

     for (size_t i{0}; i < size; i++)
     {
          sum += collection[i];
     }

     return (sum > threshold) ? true : false;
}

int main()
{
     double temperatures[]{10.0, 20.0, 30.0, 40.0, 50.0, 100.0};

     // auto result = is_valid<double>(temperatures, 180, std::size(temperatures));
     auto result = is_valid<180, double>(temperatures, std::size(temperatures));

     std::cout << std::boolalpha;
     std::cout << "result: " << result << std::endl; // true

     return 0;
}