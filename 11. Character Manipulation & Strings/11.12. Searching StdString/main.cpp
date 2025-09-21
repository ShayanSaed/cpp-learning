#include <iostream>

int main()
{
     // std::string::find()

     /*
     // Finds the starting index where the str substring is found in
     // the string where we call the method.
     std::string string{"Water was poured in the heater"};
     std::string search_for{"ter"};

     size_t found_pos = string.find(search_for);
     std::cout << "find('ter'): index [" << found_pos << "]" << std::endl; // index [2]

     // find red
     search_for = "red";
     found_pos = string.find(search_for);
     std::cout << "find('red'): index [" << found_pos << "]" << std::endl; // index [13]

     // Find something that isn't there
     search_for = "chicken";
     found_pos = string.find(search_for);
     std::cout << "find('chicken'): index [" << found_pos << "]" << std::endl; // huge number
     */

     /*
     // Using std::string::npos to check if search was successfull or failed
     std::string string{"Water was poured in the heater"};
     std::string search_for{"red"};

     size_t found_pos = string.find(search_for);

     if (found_pos != std::string::npos)
     {
          std::cout << "'red' found starting at position: " << found_pos << std::endl; // 13
     }
     else
     {
          std::cout << "Could not find the string 'red'" << std::endl;
     }

     // Search for chicken and check result against std::string::npos
     search_for = "chicken";

     found_pos = string.find(search_for);

     if (found_pos != std::string::npos)
     {
          std::cout << "'chicken' found starting at position: " << found_pos << std::endl;
     }
     else
     {
          std::cout << "Could not find the string 'chicken'" << std::endl;
     }
     */

     /*
     // Can specify the position where we want the search to start
     // using the second parameter of the method

     std::string string{"Water was poured in the heater"};
     std::string search_for{"ter"};

     size_t found_pos = string.find(search_for);
     std::cout << "'ter' found at position: " << found_pos << std::endl; // 2

     found_pos = string.find(search_for, 0);
     std::cout << "'ter' found at position: " << found_pos << std::endl; // 2

     found_pos = string.find(search_for, 10);
     std::cout << "'ter' found at position: " << found_pos << std::endl; // 27
     */

     // Finds the first substring equal to the character string pointed to by s
     // pos: the position where we start searching in the std::string
     std::string string = "beer is packaged by her in beer cans around here.";
     const char *c_string{"her"};

     size_t found_pos = string.find(c_string, 2);

     if (found_pos != std::string::npos)
     {
          std::cout << c_string << " found at position: " << found_pos << std::endl; // 20
     }
     else
     {
          std::cout << "Could not find the string " << c_string << std::endl;
     }

     return 0;
}