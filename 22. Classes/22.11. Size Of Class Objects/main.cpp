#include <iostream>

class Car
{
private:
     std::string name, company; // 32, 32
     int *p_speed{nullptr}; // 8

public:
     Car() = default;
     Car(std::string_view car_name, std::string_view car_company, int car_speed);

     ~Car();
};

int main(){
     std::cout << "sizeof(std::string): " << sizeof(std::string) << std::endl; // 32
     std::cout << "sizeof(int*): " << sizeof(int*) << std::endl; // 8

     std::cout << "sizeof(Car): " << sizeof(Car) << std::endl; // 72

     return 0;
}