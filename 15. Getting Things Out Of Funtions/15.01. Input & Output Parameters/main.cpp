#include <iostream>
#include <string>

void max_str(const std::string &input1, const std::string input2, std::string &output)
{
     if (input1 > input2)
     {
          output = input1;
     }
     else
     {
          output = input2;
     }
}

void max_int(int input1, int input2, int &output)
{
     if (input1 > input2)
     {
          output = input1;
     }
     else
     {
          output = input2;
     }
}

void max_double(double input1, double input2, double *output)
{
     if (input1 > input2)
     {
          *output = input1;
     }
     else
     {
          *output = input2;
     }
}

int main()
{
     /*
     std::string string1("Cassablanca"), string2("Bellevue"), output_string;

     max_str(string1, string2, output_string);
     std::cout << "max_str: " << output_string << std::endl; // Cassablanca
     */

     /*
     int int1{23}, int2{89}, output_int;

     max_int(int1, int2, output_int);
     std::cout << "max_int: " << output_int << std::endl; // 89
     */

     /*
     double double1{53.6}, double2{38.2}, output_double;

     max_double(double1, double2, &output_double);
     std::cout << "max_double: " << output_double << std::endl; // 53.6
     */

     return 0;
}