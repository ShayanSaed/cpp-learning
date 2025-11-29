#include <iostream>
#include "cylinder.h"

int main()
{
     Cylinder cylinder1(2.5, 10);
     std::cout << "volume: " << cylinder1.volume() << std::endl; // 196.35

     // Get our objects
     std::cout << "cylinder1.get_base_radius(): " << cylinder1.get_base_radius() << std::endl; // 2.5
     std::cout << "cylinder1.get_height(): " << cylinder1.get_height() << std::endl;           // 10

     // Set our objects
     cylinder1.set_base_radius(5);
     cylinder1.set_height(20);

     std::cout << "volume: " << cylinder1.volume() << std::endl; // 1570.8

     return 0;
}