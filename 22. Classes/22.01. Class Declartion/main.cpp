#include <iostream>

const double PI{3.1415926535897932384626433832795};

class Cylinder
{
public:
     double base_radius{2.5}, height{10};

public:
     double volume()
     {
          return PI * base_radius * base_radius * height;
     }
};

int main()
{
     Cylinder cylinder1;

     std::cout << "volume: " << cylinder1.volume() << std::endl; // 196.35

     // Change the member variables
     cylinder1.base_radius = 5;
     cylinder1.height = 15;
     std::cout << "volume: " << cylinder1.volume() << std::endl; // 1178.1

     cylinder1.height = 12.5;
     std::cout << "volume: " << cylinder1.volume() << std::endl; // 981.748

     return 0;
}