#include <iostream>

int main()
{
     /*
     for (size_t i{}; i < 10; i++)
     {
          std::cout << "Hello! \n";
     }
     */

     // std::cout << "He said \"Get out of here immediately!\"" std::endl; // Error

     /*
     // "\t": Tab
     // "\n": New line
     std::string todo_list{"\tClean the house\n\tWalk the dog\n\tDo laundry\n\tPick groceries"};
     std::cout << "todo_list: " << std::endl;
     std::cout << todo_list << std::endl;
     */

     /*
     // When using windows paths, you must use a pair of backslashes "\\"
     // instead of a single backslash "\", because the single
     // backslash "\" is used for escape sequences such as "\t"
     // and the like.
     std::string windows_path{"D:\\sandbox\\testProject\\hello.txt"};
     std::cout << "windows_path: " << windows_path << std::endl; // D:\sandbox\testProject\hello.txt
     */

     /*
     std::string linux_path{"/home/username/files/hello.txt"};
     std::cout << "linux_path: " << linux_path << std::endl; // /home/username/files/hello.txt
     */

     /*
     // " \" ": Use to write Quotation mark/Double quote in the console
     std::string hint{" \"\\\\\" escapes a backslash character like \\."};
     std::cout << "hint: " << hint << std::endl; // "\\" escapes a backslash character like \.
     */

     /*
     // "\a": the alert (bell) character, which traditionally makes the computer produce a beep sound.
     std::cout << "\a" << std::endl;
     */

     return 0;
}