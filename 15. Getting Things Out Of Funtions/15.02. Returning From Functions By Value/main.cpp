#include <iostream>

int sum(int a, int b)
{
     int result = a + b;
     std::cout << "In, &result(int): " << &result << std::endl;
     return result;
}

std::string add_strings(std::string str1, std::string str2)
{
     std::string result = str1 + str2;
     std::cout << "In, &result(std::string): " << &result << std::endl;
     return result;
}

int main()
{
     /*
     int x{13}, y{8};
     int result = sum(x, y);

     std::cout << "Out, &result(int): " << &result << std::endl;
     std::cout << "result: " << result << std::endl; // 23
     */

     /*
     std::string str1{"Hello"}, str2{" World!"};
     std::string result = add_strings(str1, str2);

     std::cout << "Out, &result(std::string): " << &result << std::endl;
     std::cout << "result: " << result << std::endl; // Hello World!
     */

     return 0;
}