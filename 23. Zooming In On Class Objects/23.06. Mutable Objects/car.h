#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

class Car
{
private:
     std::string name, company;
     int *p_speed{nullptr};
     mutable size_t print_info_count{};

public:
     Car() = default;
     Car(const std::string &car_name, const std::string &car_company, int car_speed);

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
};

#endif