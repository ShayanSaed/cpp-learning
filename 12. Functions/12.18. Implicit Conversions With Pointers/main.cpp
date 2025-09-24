#include <iostream>

void print_sum(int *number1, int *number2)
{
     std::cout << "sum: " << (*number1 + *number2) << std::endl;
}

int main()
{
     int a{6}, b{4};

     print_sum(&a, &b); // 10

     return 0;
}