#include <iostream>

int main()
{
     /*
     // Use raw string literals
     std::string todo_list{R"(     Clean the house
     Walk the dog
     Do laundry
     Pick groceries
     )"};

     std::cout << "todo_list: " << std::endl;
     std::cout << todo_list << std::endl;
     */

     /*
     // Raw string literals with assignments
     std::string todo_list = R"(     Clean the house
     Walk the dog
     Do laundry
     Pick groceries
     )";

     std::cout << "todo_list: " << std::endl;
     std::cout << todo_list << std::endl;
     */

     /*
     // Raw string literals with C-string assignments
     const char *c_string{R"(     Clean the house
     Walk the dog
     Do laundry
     Pick groceries
     )"};

     std::cout << "todo_list: " << std::endl;
     std::cout << c_string << std::endl;
     */

     /*
     // Fixing escaped strings From the previous topic(Escape Sequences)
     std::string windows_path{R"(D:\sandbox\testProject\hello.txt)"};
     std::cout << "windows_path: " << windows_path << std::endl; // D:\sandbox\testProject\hello.txt

     std::string linux_path{R"(/home/username/files/hello.txt)"};
     std::cout << "linux_path: " << linux_path << std::endl; // /home/username/files/hello.txt

     std::string hint{R"("\\" escapes a backslash character like \.)"};
     std::cout << "hint: " << hint << std::endl; // "\\" escapes a backslash character like \.
     */

     /*
     // Problematic raw string literals
     std::string sentence{R"---(The message was "(Stay out of this!)")---"};
     std::cout << "sentence: " << sentence << std::endl; // The message was "(Stay out of this!)"
     */

     return 0;
}