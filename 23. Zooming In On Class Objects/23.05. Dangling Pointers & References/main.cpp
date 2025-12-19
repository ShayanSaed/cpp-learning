#include <iostream>
#include "car.h"

int main()
{
     Car racing_car("mercedes benz", "Benz", 290);

     /*
     const std::string str_ref = racing_car.compile_car_info();
     std::cout << "info: " << str_ref << std::endl;
     */

     unsigned int *int_ptr = racing_car.car_fuel_consumption();
     std::cout << "car_fuel_consumption: " << *int_ptr << std::endl;

     std::cout << "Done!" << std::endl;

     return 0;
}