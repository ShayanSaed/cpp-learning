#include <iostream>

int find_character_v1(const std::string &string, char character);

void find_character_v2(const std::string &string, char character, bool &success);

int main()
{
     std::string sentence{"I love C++!"};
     char character{'e'};

     // calling find_character_v1
     /*
     int character_index = find_character_v1(sentence, character);

     if (character_index != -1)
     {
          std::cout << "Found character '" << character << "' at index " << character_index << std::endl;
          // output: Found character 'e' at index 5
     }
     else
     {
          std::cout << "'" << character << "' character not found!" << std::endl;
     }
     */

     // calling find_character_v2
     /*
     bool success{false};

     find_character_v2(sentence, character, success);

     if (success)
     {
          std::cout << "Found character '" << character << "' in '" << sentence << "' sentence!" << std::endl;
          // output: Found character 'e' in 'I love C++!' sentence!
     }
     else
     {
          std::cout << "'" << character << "' character not found!" << std::endl;
     }
     */

     return 0;
}

int find_character_v1(const std::string &string, char character)
{
     // If character found, return the character index, else return -1
     for (size_t i{}; i < string.size(); i++)
     {
          if (string.c_str()[i] == character)
          {
               return i;
          }
     }

     return -1;
}

void find_character_v2(const std::string &string, char character, bool &success)
{
     // If character found set success flag to true, else set to false
     for (size_t i{}; i < string.size(); i++)
     {
          if (string.c_str()[i] == character)
          {
               success = true;
               return;
          }
     }

     success = false;
}