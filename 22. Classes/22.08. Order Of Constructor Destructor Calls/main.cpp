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

int main()
{
     Car racing_car1("1. mercedes benz", "Benz", 290);
     Car racing_car2("2. BMW M4", "BMW", 310);
     Car racing_car3("3. Ferrari F8", "Ferrari", 340);
     Car racing_car4("4. Porsche 911", "Porsche", 330);
     /*
     output:
     Car constructor called for 1. mercedes benz
     Car constructor called for 2. BMW M4
     Car constructor called for 3. Ferrari F8
     Car constructor called for 4. Porsche 911
     Done!
     Car destructor called for 4. Porsche 911
     Car destructor called for 3. Ferrari F8
     Car destructor called for 2. BMW M4
     Car destructor called for 1. mercedes benz
     */

     std::cout << "Done!" << std::endl;

     return 0;
}