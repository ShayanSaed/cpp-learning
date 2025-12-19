#include <iostream>
#include "car.h"

int main()
{
     const Car racing_car("mercedes benz", "Benz", 290);

     racing_car.print_info();

     std::cout << "car name: " << racing_car.car_name() << std::endl; // Getter

     // Modify the object
     // racing_car.car_name() = "BMW M4"; // Setter

     racing_car.print_info();

     return 0;
}