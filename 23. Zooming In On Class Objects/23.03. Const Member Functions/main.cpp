#include <iostream>
#include "car.h"

/*
This causes no problem because we are working with
a copy inside the function
*/
void buy_car(Car car)
{
     car.set_name("BMW M4");
     car.print_info();
}

// Parameter by reference
void buy_car_ref(Car &car_ref)
{
     // Compiler won't allow passing const object as argument
}

// Parameter by const reference
void buy_car_const_ref(const Car &car_const_ref)
{
     // car_const_ref.set_name("BMW M4"); // Expected
     // car_const_ref.print_info(); // Error
}

// Pointer to non const as parameter
void buy_car_pointer(Car *car_p)
{
     // Compiler won't allow passing const Car objects as arguments
}

// Pointer to non const as parameter
void buy_car_pointer_to_const(const Car *car_const_p)
{
     // car_const_p->set_name("BMW M4"); // Error: Expected
     // car_const_p->print_info(); // Error: Not Expected
}

int main()
{
     const Car racing_car("mercedes benz", "Benz", 290);
     std::cout << "Address of object: " << &racing_car << std::endl;

     racing_car.print_info();

     // buy_car(racing_car); // Car(0x789a9ffb50) : [name: BMW M4, company: Benz, *p_speed: 290]

     // buy_car_ref(racing_car); // Compiler error

     // buy_car_const_ref(racing_car);

     // buy_car_pointer(&racing_car);

     // buy_car_pointer_to_const(&racing_car);

     return 0;
}