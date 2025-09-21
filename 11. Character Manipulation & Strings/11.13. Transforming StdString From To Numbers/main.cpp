#include <iostream>

int main()
{
     /*
     // to String: the std::to_string function
     int int_var{223};
     float float_var{22.3f};
     double double_var{1.34847e5};

     std::string int_str{std::to_string(int_var)};
     std::string float_str{std::to_string(float_var)};
     std::string double_str{std::to_string(double_var)};

     std::cout << "int_var: " << int_var << std::endl; // 223
     std::cout << "int_str: " << int_str << std::endl; // 223

     std::cout << "float_var: " << float_var << std::endl; // 22.3
     std::cout << "float_str: " << float_str << std::endl; // 22.299999

     std::cout << "double_var: " << double_var << std::endl; // 134847
     std::cout << "double_str: " << double_str << std::endl; // 134847.000000
     */

     /*
     // std::string to number (integral types)
     // int, long , long long
     // std::stoi, std::stol, std::stoll
     std::string number_str{"34.567"}; // Could even be negative

     int int_var = std::stoi(number_str);
     std::cout << "int_var: " << int_var << std::endl;                 // 34
     std::cout << "sizeof(int_var): " << sizeof(int_var) << std::endl; // 4

     long long_var = std::stol(number_str);
     std::cout << "long_var: " << long_var << std::endl;                 // 34
     std::cout << "sizeof(long_var): " << sizeof(long_var) << std::endl; // 4

     long long long_long_var = std::stol(number_str);
     std::cout << "long_long_var: " << long_long_var << std::endl;                 // 34
     std::cout << "sizeof(long_long_var): " << sizeof(long_long_var) << std::endl; // 8
     */

     /*
     // unsigned long , unsigned long long
     // std::stoul, std::stoull
     // Underflows when the std::string contains a negative number
     std::string number_str = "34.567";
     // std::string number_str = "-34.567"; // Resulting unsigned long and long long underflow
     //  and become huge numbers of their type

     unsigned long u_l_var = std::stoul(number_str);
     std::cout << "u_l_var: " << u_l_var << std::endl;                 // 34
     std::cout << "sizeof(u_l_var): " << sizeof(u_l_var) << std::endl; // 4

     unsigned long long u_l_l_var = std::stoul(number_str);
     std::cout << "u_l_l_var: " << u_l_l_var << std::endl;                 // 34
     std::cout << "sizeof(u_l_l_var): " << sizeof(u_l_l_var) << std::endl; // 8
     */

     /*
     // float, double, long double
     // std::stof, std::stod, std::stold
     std::string number_str = "34.567";

     float float_var = std::stof(number_str);
     std::cout << "float_var: " << float_var << std::endl;                 // 34.567
     std::cout << "sizeof(float_var): " << sizeof(float_var) << std::endl; // 4

     double double_var = std::stod(number_str);
     std::cout << "double_var: " << double_var << std::endl;                 // 34.567
     std::cout << "sizeof(double_var): " << sizeof(double_var) << std::endl; // 8

     long double long_double_var = std::stod(number_str);
     std::cout << "long_double_var: " << long_double_var << std::endl;                 // 34.567
     std::cout << "sizeof(long_double_var): " << sizeof(long_double_var) << std::endl; // 16
     */

     return 0;
}