#include <iostream>

int main()
{
     int scores[]{1, 2, 3, 4, 5, 6, 7, 8, 8, 3, 4, 6, 9, 1, 4};

     // int count{std::size(scores)};

     /*
     std::cout << "sizeof(scores): " << sizeof(scores) << std::endl;
     std::cout << "sizeof(scores[0]): " << sizeof(scores[0]) << std::endl;

     int count{sizeof(scores) / sizeof(scores[0])};

     for (size_t i{0}; i < count; ++i)
     {
          std::cout << "score [" << i << "]: " << scores[i] << std::endl;
     }
     */

     // Range based for loop
     for (auto score : scores)
     {
          std::cout << "value: " << score << std::endl;
     }

     return 0;
}