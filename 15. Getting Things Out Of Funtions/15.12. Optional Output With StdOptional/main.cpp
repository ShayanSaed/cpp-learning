#include <iostream>
#include <optional>

std::optional<size_t> find_character_v3(const std::string &string, char character);

std::optional<size_t> find_character_v4(const std::string &string, std::optional<char> character = std::nullopt);

int main()
{
     std::string sentence{"I love C++!"};
     char character{'e'};

     // calling find_character_v3
     /*
     std::optional<size_t> character_index = find_character_v3(sentence, character);

     if (character_index.has_value())
     {
          std::cout << "Found character '" << character << "' at index " << character_index.value() << std::endl;
          // output: Found character 'e' at index 5
     }
     else
     {
          std::cout << "'" << character << "' character not found!" << std::endl;
     }
     */

     // calling find_character_v4
     /*
     std::optional<size_t> character_index = find_character_v4(sentence, character);

     if (character_index.has_value())
     {
          std::cout << "Found character '" << character << "' at index " << character_index.value() << " in '" << sentence << "' sentence!" << std::endl;
          // Found character 'e' at index 5 in 'I love C++!' sentence!
     }
     else
     {
          std::cout << "'" << character << "' character not found!" << std::endl;
     }
     */

     return 0;
}

std::optional<size_t> find_character_v3(const std::string &string, char character)
{
     // If character found, return the character index, else return an empty std::optional
     for (size_t i{}; i < string.size(); i++)
     {
          if (string.c_str()[i] == character)
          {
               return i;
          }
     }

     return std::nullopt;
}

std::optional<size_t> find_character_v4(const std::string &string, std::optional<char> character)
{
     // If found set return index, else return empty
     if (!character.has_value())
          return std::nullopt;

     for (size_t i{}; i < string.size(); i++)
     {
          if (string[i] == character.value())
          {
               return i;
          }
     }

     return std::nullopt;
}