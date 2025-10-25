#include <iostream>

void print_age(int age = 19);

void print_age(long int age = 23);

int main(){
     // print_age(); // compiler error
     
     return 0;
}

void print_age(int age){
     std::cout << "Your age is (int version): " << std::endl;
}

void print_age(long int age){
     std::cout << "Your age is (long int version): " << std::endl;
}