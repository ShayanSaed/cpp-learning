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

     void print_info()
     {
          std::cout << "Car(" << this << ") : [name: " << name << ", company: " << company << ", *p_speed: " << *p_speed << "]" << std::endl;
     }

     // Setters
     // Chained calls using pointers
     /*
     Car *set_car_name(std::string_view name)
     {
          // name = name; Wrong!
          this->name = name;
          return this;
     }

     Car *set_car_company(std::string_view company)
     {
          this->company = company;
          return this;
     }

     Car *set_car_speed(int speed)
     {
          *(this->p_speed) = speed;
          return this;
     }
     */

     // Chained calls using references
     /*
     Car &set_car_name(std::string_view name)
     {
          // name = name; Wrong!
          this->name = name;
          return *this;
     }

     Car &set_car_company(std::string_view company)
     {
          this->company = company;
          return *this;
     }

     Car &set_car_speed(int speed)
     {
          *(this->p_speed) = speed;
          return *this;
     }
     */
};

Car::Car(std::string_view car_name, std::string_view car_company, int car_speed)
{
     name = car_name;
     company = car_company;
     p_speed = new int;
     *p_speed = car_speed;

     std::cout << "Car constructor called for " << name << " at " << this << std::endl;
}

Car::~Car()
{
     delete p_speed;
     std::cout << "Car constructor called for " << name << " at " << this << std::endl;
}

int main()
{
     Car racing_car("mercedes benz", "Benz", 290);
     racing_car.print_info(); // Car(0x725dbff740) : [name: mercedes benz, company: Benz, *p_speed: 290]

     // Chained calls using pointers
     /*
     racing_car.set_car_name("BMW M4")->set_car_company("BMW")->set_car_speed(310);
     racing_car.print_info(); // Car(0x725dbff740) : [name: BMW M4, company: BMW, *p_speed: 310]
     */

     // Chained calls using references
     /*
     racing_car.set_car_name("BMW M4").set_car_company("BMW").set_car_speed(310);
     racing_car.print_info(); // Car(0x725dbff740) : [name: BMW M4, company: BMW, *p_speed: 310]
     */

     std::cout << "Done!" << std::endl;

     return 0;
}