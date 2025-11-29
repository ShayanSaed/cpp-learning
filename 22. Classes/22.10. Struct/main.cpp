#include <iostream>

class Car
{
     std::string model; // private by default
     int speed;
};

struct Bus
{
     std::string model; // public by default
     int capacity;
};

void print_bus_info(const Bus& bus){
     
     std::cout << "The " << bus.model << " bus has a capacity of " << bus.capacity << " people." << std::endl;
}

int main()
{
     Car racing_car;
     // racing_car.model = "BMW"; // Error
     // racing_car.speed = 310; // Error

     Bus school_bus;
     school_bus.model = "Blue Bird All American";
     school_bus.capacity = 25;

     std::cout << "Bus model: " << school_bus.model << std::endl;
     std::cout << "Bus capacity: " << school_bus.capacity << std::endl;

     print_bus_info(school_bus); // The Blue Bird All American bus has a capacity of 25 people.

     Bus Intercity_bus = {"Mercedes-Benz Travego", 20};

     print_bus_info(Intercity_bus); // The Mercedes-Benz Travego bus has a capacity of 20 people.

     return 0;
}