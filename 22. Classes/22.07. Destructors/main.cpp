#include <iostream>
#include <string_view>

class Car
{
private:
     std::string name, company;
     int *p_speed{nullptr};

public:
     Car() = default;
     Car(std::string_view car_name, std::string_view car_company, int car_speed);

     ~Car();
};

Car::Car(std::string_view car_name, std::string_view car_company, int car_speed)
{
     name = car_name;
     company = car_company;
     p_speed = new int;
     *p_speed = car_speed;

     std::cout << "Car constructor called for " << name << std::endl;
}

Car::~Car()
{
     delete p_speed;
     std::cout << "Car destructor called for " << name << std::endl;
}

void use_car()
{
     Car *p_car = new Car("mercedes benz", "Benz", 290);

     delete p_car;
}

int main()
{
     // Car racing_car("mercedes benz", "Benz", 290);
     /*
     output:
     Car constructor called for mercedes benz
     Done!
     Car destructor called for mercedes benz
     */

     // use_car();
     /*
     output:
     Car constructor called for mercedes benz
     Car destructor called for mercedes benz
     Done!
     */

     std::cout << "Done!" << std::endl;

     return 0;
}