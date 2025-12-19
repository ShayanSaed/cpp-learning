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
     Car(const std::string &car_name, const std::string &car_company, int car_speed);

     ~Car();

     /*
     // Getters
     std::string get_name() const;
     std::string get_company() const;
     int get_age() const;

     // Setters
     void set_name(std::string car_name);
     void set_company(std::string car_company);
     void set_speed(int car_speed);
     */

     // Getters That Double As Setters
     std::string &car_name()
     {
          return name;
     }

     const std::string &car_name() const
     {
          return name;
     }

     std::string &car_company()
     {
          return company;
     }

     const std::string &car_company() const
     {
          return company;
     }

     int &car_speed()
     {
          return *p_speed;
     }

     const int &car_speed() const
     {
          return *p_speed;
     }

     void print_info() const;

     const std::string &compile_car_info() const
     {
          std::string car_info = "car_name: " + car_name + " car_company: " + car_company + " car_speed: " + std::to_string(*p_speed);

          return car_info;
     }

     unsigned int* car_fuel_consumption() const {
          unsigned int fuel_consumption {10};
          return &fuel_consumption;
     }
};

#endif