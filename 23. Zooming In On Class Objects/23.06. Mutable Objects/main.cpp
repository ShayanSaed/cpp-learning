#include <iostream>
#include "car.h"

int main()
{
     Car racing_car("mercedes benz", "Benz", 290);

     racing_car.print_info();
     racing_car.print_info();

     for (size_t i{0}; i < 10; i++)
     {
          racing_car.print_info();
     }

     return 0;
}