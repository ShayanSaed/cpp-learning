#include <iostream>
#include "cylinder.h"

int main()
{
     Cylinder cylinder1(2.5, 10);
     std::cout << "cylinder1.volume(): " << cylinder1.volume() << std::endl;

     // Managing a stack object through pointers
     Cylinder *p_cylinder1 = &cylinder1;

     // Access pointer class methods
     std::cout << "(*p_cylinder1).volume(): " << (*p_cylinder1).volume() << std::endl;
     std::cout << "p_cylinder1->volume(): " << p_cylinder1->volume() << std::endl;

     // ---------------------------------------------------------------------------------------------------
     std::cout << std::endl;
     // ---------------------------------------------------------------------------------------------------

     // Create a cylinder heap object through the new operator
     Cylinder *p_cylinder2 = new Cylinder(5, 20);
     std::cout << "p_cylinder2->volume(): " << p_cylinder2->volume() << std::endl;

     std::cout << "p_cylinder2->get_base_radius(): " << p_cylinder2->get_base_radius() << std::endl; // 5
     p_cylinder2->set_base_radius(6.5);
     std::cout << "p_cylinder2->get_base_radius(): " << p_cylinder2->get_base_radius() << std::endl; // 6.5

     delete p_cylinder2;

     return 0;
}