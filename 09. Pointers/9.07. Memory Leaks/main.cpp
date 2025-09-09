#include <iostream>

int main()
{
     /*
     int *p_number{new int{75}}; // Points to some address, let's call that address1

     // Shouid delete and reset p_number here

     int number{16}; // stack variable

     p_number = &number; // Now p_number points to address2 , but address1 is still in use by
                         // our program. But our program has lost access to that memory location.
                         // Memory has been leaked.
     */

     /*
     // Double allocation

     int *p_number{new int{76}};

     // Use the pointer

     // Shouid delete and reset p_number here

     p_number = new int{38}; // ❗ Memory with int{76} leaked ❗

     delete p_number;
     p_number = nullptr;
     */

     /*
     // Nested scopes with dynamically allocated memory
     {
          int *p_number{new int{49}};

          // Use the dynamic memory
     }
     // Memory with int{49} leaked
     */

     std::cout << "Program ending well" << std::endl;

     return 0;
}