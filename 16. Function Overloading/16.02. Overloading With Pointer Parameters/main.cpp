#include <iostream>

int max(int *numbers, size_t count)
{
     std::cout << "int's overload called" << std::endl;

     int maximum{0};

     for (size_t i{0}; i < count; i++)
     {
          if (numbers[i] > maximum)
          {
               maximum = numbers[i];
          }
     }

     return maximum;
}

double max(double *numbers, size_t count)
{
     std::cout << "double's overload called" << std::endl;

     double maximum{0};

     for (size_t i{0}; i < count; i++)
     {
          if (numbers[i] > maximum)
          {
               maximum = numbers[i];
          }
     }

     return maximum;
}

int main()
{
     int ints[]{1, 2, 3, 4, 5};

     double doubles[]{1.0, 2.0, 3.0, 4.0, 5.0};

     auto result = max(doubles, std::size(doubles)); // double's overload called
     std::cout << "result: " << result << std::endl; // 5

     return 0;
}