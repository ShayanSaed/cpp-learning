#include "car.h"

Car::Car(const std::string &car_name, const std::string &car_company, int car_speed)
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

/*
// Getters
std::string Car::get_name() const
{
     // return name;
     return this->name;
}

std::string Car::get_company() const
{
     return company;
}

int Car::get_age() const
{
     return *p_speed;
}

// Setters
void Car::set_name(std::string car_name)
{
     // name = car_name;
     this->name = car_name;
}

void Car::set_company(std::string car_company)
{
     company = car_company;
}

void Car::set_speed(int car_speed)
{
     *p_speed = car_speed;
}
*/

void Car::print_info() const
{
     std::cout << "Car(" << this << ") : [name: " << this->name << ", company: " << this->company << ", *p_speed: " << *(this->p_speed) << "]" << std::endl;
}