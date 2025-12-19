#include "car.h"

Car::Car(const std::string &car_name, const std::string &car_company, int car_speed)
{
     name = car_name;
     company = car_company;
     p_speed = new int;
     *p_speed = car_speed;

     std::cout << "Car constructor called for " << name << std::endl;
}

void Car::print_info() const
{
     ++print_info_count;
     std::cout << "Car(" << this << ") : [name: " << this->name << ", company: " << this->company << ", *p_speed: " << *(this->p_speed) << ", print_info_count: " << print_info_count << "]" << std::endl;
}