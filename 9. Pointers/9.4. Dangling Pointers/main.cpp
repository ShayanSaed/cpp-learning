#include <iostream>

int main()
{
     /*
     // Case 1: Uninitialized pointer
     int *p_number; // Dangling uninitialized pointer

     std::cout << "Case 1: Uninitialized pointer" << std::endl;
     std::cout << "p_number: " << p_number << std::endl;
     std::cout << "*p_number: " << *p_number << std::endl; // ❌ CRASH ❌
     */

     /*
     // Case 2: deleted pointer
     std::cout << "Case 2: Deleted pointer" << std::endl;

     int *p_number1{new int{54}};

     std::cout << "*p_number1(before delete): " << *p_number1 << std::endl;

     delete p_number1;

     std::cout << "*p_number1(after delete): " << *p_number1 << std::endl;
     */

     /*
     // Case 3: Multiple pointers pointing to same address
     std::cout << "Case 3: Multiple pointers pointing to same address" << std::endl;

     int *p_number2{new int{34}};
     int *p_number3{p_number2};

     std::cout << "p_number2 - " << p_number2 << " - " << *p_number2 << std::endl;
     std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std::endl;

     // Deleting p_number2
     delete p_number2;

     // p_number3 points to deleted memory. Dereferncing it will lead to
     / undefined behaviour: Crash/garbage or whatever

     std::cout << "p_number3(after deleting p_number2) - " << p_number3 << " - " << *p_number3 << std::endl;
     */

     /*
     // Solution 1: Initialize your pointers immediately upon declaration
     std::cout << "Solution 1" << std::endl;

     int *p_number4{nullptr};
     int *p_number5{new int{94}};

     // Check for nullptr before use
     if (p_number5 != nullptr)
     {
          std::cout << "p_number5: " << *p_number5 << std::endl;
     }
     else
     {
          std::cout << "Invalid address!" << std::endl;
     }
     */

     /*
     // Solution 2:
     // Right after you call delete on a pointer, remember to reset
     // the pointer to nullptr to make it CLEAR it doesn't point anywere
     std::cout << "Solution 2" << std::endl;

     int *p_number6{new int{18}};

     // Use the pointer however you want
     std::cout << "p_number6 - " << p_number6 << " - " << *p_number6 << std::endl;

     delete p_number6;
     p_number6 = nullptr; // Reset the pointer

     // Check for nullptr before use
     if (p_number6 != nullptr)
     {
          std::cout << "p_number5: " << *p_number6 << std::endl;
     }
     else
     {
          std::cout << "Invalid memory access!" << std::endl;
     }
     */

     /*
     // Solution 3:
     // For multiple pointers pointing to the same address, Make sure there is
     // one clear pointer (master pointer) that owns the memory (responsible for releasing when necessary),
     // other pointers should only be able to dereference when the master pointer is valid
     std::cout << "Solution 3: " << std::endl;

     int *p_number7{new int{49}}; // Master pointer
     int *p_number8{p_number7};

     // Dereference the pointers and use them
     std::cout << "p_number7 - " << p_number7 << " - " << *p_number7 << std::endl;

     // Only use slave pointers when master pointer is valid
     if (p_number7 != nullptr)
     {
          std::cout << "p_number8 - " << p_number8 << " - " << *p_number8 << std::endl;
     }

     delete p_number7; // Master releases the memory
     p_number7 = nullptr;

     if (p_number7 != nullptr)
     {
          std::cout << "p_number8 - " << p_number8 << " - " << *p_number8 << std::endl;
     }
     else
     {
          std::cerr << "WARNING: Trying to use an invalid pointer!" << std::endl;
     }
     */

     std::cout << "Program is ending well!" << std::endl;

     return 0;
}