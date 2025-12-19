#include <iostream>
#include "car.h"

int main()
{
     const Car racing_car("mercedes benz", "Benz", 290);

     // Direct access
     /*
     racing_car.print_info(); // Error

     racing_car.set_name("BMW M4"); // Error

     racing_car.print_info(); // Error
     */

     // Pointer to non const
     // Car *racing_car_ptr = &racing_car; // Error

     // Non const reference
     // Car &racing_car_ref = racing_car; // Error

     // Pointer to const
     const Car *const_racing_car_ptr = &racing_car;
     // const_racing_car_ptr->set_name("BMW M4"); // Expected error
     // const_racing_car_ptr->get_name();

     // Const reference
     const Car &const_racing_car_ref = racing_car;
     // const_racing_car_ref.set_name("BMW M4"); // Expected error
     // const_racing_car_ref.get_name();

     return 0;
}