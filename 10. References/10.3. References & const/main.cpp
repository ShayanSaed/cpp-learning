#include <iostream>

int main()
{
     // Non const reference
     int age{53};
     const int &ref_age{age};

     /*
     std::cout << "age: " << age << std::endl;
     std::cout << "ref_age: " << ref_age << std::endl;

     // Can modify original variable through reference
     // Modify through reference
     //ref_age++; // ❌ Error ❌

     std::cout << "age: " << age << std::endl;
     std::cout << "ref_age: " << ref_age << std::endl;
     */

     // Simulating reference behavior with pointer
     const int *const p_age{&age};
     //*p_age = 67; // ❌ Error ❌

     return 0;
}