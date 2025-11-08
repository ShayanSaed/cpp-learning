#include <iostream>

// template <typename T> T maximum(T a, T b);
template <typename T> const T& maximum(const T& a, const T& b);

int main(){
     double a{91.1}, b{55.8};

     std::cout << "Out - &a: " << &a << std::endl;
     auto result = maximum(a, b);
     std::cout << "Out - &a: " << &a << std::endl;
     
     return 0;
}

/*
template <typename T> T maximum(T a, T b){
     std::cout << "In - &a: " << &a << std::endl;
     return (a > b) ? a : b;
}
*/

template <typename T> const T& maximum(const T& a, const T& b){
     std::cout << "In - &a: " << &a << std::endl;
     return (a > b) ? a : b;
}