#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

class Car
{
private:
     std::string name, company;
     int *p_speed{nullptr};

public:
     Car() = default;
     Car(std::string_view car_name, std::string_view car_company, int car_speed);

     ~Car();

     // Getters
     std::string_view get_name();
     std::string_view get_company();
     int get_age();

     // Setters
     void set_name(std::string_view car_name);
     void set_company(std::string_view car_company);
     void set_speed(int car_speed);

     void print_info();
};

#endif