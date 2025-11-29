#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"

class Cylinder
{
private:
     double base_radius{1}, height{1};

public:
     // Constctors
     Cylinder() = default;

     Cylinder(double radius_param, double height_param);

     // Methods
     double volume();

     // Setter & Getter Methods
     void set_base_radius(double radius_param);

     void set_height(double height_param);

     double get_base_radius();

     double get_height();
};

#endif