#include <iostream>
#include <optional>

int main()
{
     // Declare and initialize
     std::optional<int> speed{60};
     std::optional<std::string> name{"Shayan Saed"};
     std::optional<double> weight{87.3};
     std::optional<char> character{'C'};

     // Declare and empty initialize
     std::optional<std::string> car_name{};     // Initializes to std::nullopt
     std::optional<int> age{std::nullopt};      // std::nullopt is the null or
                                                // zero equivalent for std::optional
     std::optional<char> letter = std::nullopt; // Triggers unused warning
     std::optional<double> height = {};         // Initializes to std::nullopt
                                                // Triggers unused warning

     // Read from an std::optional variable
     std::cout << "speed: " << speed.value() << std::endl; // 60
     std::cout << "speed: " << *speed << std::endl;        // 60

     // std::optional variables value changing(writing)
     weight = 90.5;
     character = 'A';

     std::cout << "weight: " << weight.value() << std::endl;       // 90.5
     std::cout << "character: " << character.value() << std::endl; // A

     // ❌ Reading empty std::optional variables can crash our program ❌
     // std::cout << letter.value() << std::endl;
     // std::cout << height.value() << std::endl;

     // has_value()
     std::cout << std::boolalpha;
     std::cout << "weight.has_value(): " << weight.has_value() << std::endl; // true
     std::cout << "letter.has_value(): " << letter.has_value() << std::endl; // false

     // Check std::optional variables value with has_value() method
     if (weight.has_value())
     {
          std::cout << "weight contains a useful value" << std::endl;
     }
     else
     {
          std::cout << "weight contains std::nullopt" << std::endl;
     }

     // Check std::optional variables value with std::nullopt
     if (car_name != std::nullopt)
     {
          std::cout << "car_name contains a useful value" << std::endl;
     }
     else
     {
          std::cout << "car_name contains std::nullopt" << std::endl;
     }

     return 0;
}