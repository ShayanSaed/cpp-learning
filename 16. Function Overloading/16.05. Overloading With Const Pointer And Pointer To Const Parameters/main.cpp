#include <iostream>

int max(int *a, int *b){
     std::cout << "max int* called" << std::endl;
     return (*a > *b) ? *a : *b;
}

int max(const int *a, const int *b){
     std::cout << "max constant int* called" << std::endl;
     return (*a > *b) ? *a : *b;
}

// int min(const int *a, const int *b){
//      std::cout << "min constant int* called" << std::endl;
//      return (*a > *b) ? *a : *b;
// }

int min(const int * const a, const int * const b){
     std::cout << "&a: " << &a << std::endl;
     std::cout << "&b: " << &b << std::endl;
     return (*a < *b) ? *a : *b;
}

int main(){
     int a{5}, b{6};
     const int c{10}, d{11};

     auto result = max(&a, &b);
     result = max(&c, &d);

     const int * p_c{&c};
     const int * p_d{&d};

     std::cout << "&p_c: " << &p_c << std::endl;
     std::cout << "&p_d: " << &p_d << std::endl;

     result = min(p_c, p_d);

     return 0;
}