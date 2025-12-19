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
     std::string_view get_name() const;
     std::string_view get_company() const;
     int get_age() const;

     // Setters
     void set_name(std::string_view car_name);
     void set_company(std::string_view car_company);
     void set_speed(int car_speed);

     void print_info() const;
};

#endif