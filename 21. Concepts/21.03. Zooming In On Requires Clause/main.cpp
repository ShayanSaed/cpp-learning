#include <iostream>
#include <concepts>

template <typename T>
concept MyConcept = requires(T x) {
     x + x; // Simple requirements: just check the syntax

     requires sizeof(T) > 1; // Nested requirements: checks the if the expressions is true

     { x - x } -> std::convertible_to<int>; // Compound requirements: Checks if "x - x" is valid syntax,
                                            // and the result is convertiable to int
};

template <MyConcept T>
T process(T v){
     return v + v;
}

int main()
{
     std::cout << process(8) << std::endl; // 16 | OK
     std::cout << process(21.4) << std::endl; // 42.8 | OK
     // std::cout << process('c') << std::endl; // Error
     // std::cout << process(true) << std::endl; // Error

     return 0;
}