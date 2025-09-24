#include <iostream>

int max(int a, int b); // Function declaration, prototype
                       // Signature doesn't include return type

int min(int a, int b);

int incr_mult(int a, int b);

int main()
{
     int x{32}, y{76};

     std::cout << "max: " << max(x, y) << std::endl; // 76

     std::cout << "min: " << min(x, y) << std::endl; // 32

     std::cout << "increment multiply: " << incr_mult(x, y) << std::endl; // 2541

     return 0;
}

// Functions definition, Shows up after main
int max(int a, int b)
{
     if (a > b)
          return a;
     else
          return b;
}

int min(int a, int b)
{
     if (a < b)
          return a;
     else
          return b;
}

int incr_mult(int a, int b)
{
     return ((++a) * (++b));
}