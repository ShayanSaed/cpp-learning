#include <iostream>
#include <concepts>

/*
This syntax constrains the auto parameters you pass in
to comply with the std::integral concept
*/
std::integral auto add(std::integral auto a, std::integral auto b)
{
     return a + b;
}

int main()
{
     std::integral auto x = add(6, 5);
     // std::floating_point auto x = add(6.4, 5.5); // Error

     std::cout << "x: " << x << std::endl; // 11

     return 0;
}