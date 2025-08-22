#include <iostream>
#include <cmath>

int main()
{
     double weight{7.7};

     // floor
     std::cout << "Weight rounded to floor is: " << std::floor(weight) << std::endl; // 7

     // ceil
     std::cout << "Weight rounded to ceil is: " << std::ceil(weight) << std::endl; // 8

     // abs
     double savings{-5000};

     std::cout << "Abs of weight is: " << std::abs(weight) << std::endl;   // 7.7
     std::cout << "Abs of savings is: " << std::abs(savings) << std::endl; // 5000

     // exp: f(x) = e ^ x, where e = 2.71828
     double exponential = std::exp(10);
     std::cout << "The exponential of 10 is: " << exponential << std::endl; // 22026.5

     // pow
     std::cout << "3 ^ 4 is: " << pow(3, 4) << std::endl; // 81
     std::cout << "9 ^ 3 is: " << pow(9, 3) << std::endl; // 720

     // Log
     std::cout << "Log; to get 54.59, you would elevate e to the power of: "
               << std::log(54.59) << std::endl; // 3.99985

     // log10, 10 ^ 4 = 10000, to get 10k, you'd need to elevate 10 to the power of? this is log in base 10
     std::cout << "To get 10000, you'd need to elevate 10 to the power of: "
               << std::log10(10000) << std::endl; // 4

     // sqrt
     std::cout << "The square root of 81 is: " << std::sqrt(81) << std::endl; // 9

     // round
     std::cout << "3.654 rounded to: " << std::round(3.654) << std::endl; // 4
     std::cout << "2.5 is rounded to: " << std::round(2.5) << std::endl;  // 3
     std::cout << "2.4 is rounded to: " << std::round(2.4) << std::endl;  // 2

     return 0;
}