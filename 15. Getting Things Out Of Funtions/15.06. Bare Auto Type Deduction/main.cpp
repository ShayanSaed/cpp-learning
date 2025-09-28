#include <iostream>

int main()
{
     // Type deduction with auto: Just a copy
     /*
     double some_var{23.8};

     auto some_var_copy = some_var;

     // Variables sizeof
     std::cout << "sizeof(some_var): " << sizeof(some_var) << std::endl;           // 8
     std::cout << "sizeof(some_var_copy): " << sizeof(some_var_copy) << std::endl; // 8

     // Variables address
     std::cout << "&some_var: " << &some_var << std::endl;           // same address
     std::cout << "&some_var_copy: " << &some_var_copy << std::endl; // same address

     // Variables value
     std::cout << " some_var: " << some_var << std::endl;           // 23.8
     std::cout << " some_var_copy: " << some_var_copy << std::endl; // 23.8
     */

     /*
     double some_var{23.8};

     double &some_var_ref{some_var};

     auto B = some_var_ref; // B is not deduced as a reference to double
                            // it's just a double that contains the value
                            // in some_var_ref

     ++B;

     // Variables sizeof
     std::cout << "sizeof(some_var) : " << sizeof(some_var) << std::endl;         // 8
     std::cout << "sizeof(some_var_ref) : " << sizeof(some_var_ref) << std::endl; // 8
     std::cout << "sizeof(B) : " << sizeof(B) << std::endl;                       // 8

     // Variables address
     std::cout << "&some_var : " << &some_var << std::endl;
     std::cout << "&some_var_ref : " << &some_var_ref << std::endl;
     std::cout << "&B : " << &B << std::endl; // Not same address with "some_var" or "some_var_ref"

     // Variables value
     std::cout << "some_var : " << some_var << std::endl;         // 23.8
     std::cout << "some_var_ref : " << some_var_ref << std::endl; // 23.8
     std::cout << "B : " << B << std::endl;                       // 24.8
     */

     /*
     // True reference deduction
     double some_var{23.8};

     double &some_var_ref{some_var};

     auto &C = some_var_ref; // C is deduced as a double reference

     ++C;

     // Variables sizeof
     std::cout << "sizeof(some_var) : " << sizeof(some_var) << std::endl;         // 8
     std::cout << "sizeof(some_var_ref) : " << sizeof(some_var_ref) << std::endl; // 8
     std::cout << "sizeof(C) : " << sizeof(C) << std::endl;                       // 8

     // Variables address
     std::cout << "&some_var : " << &some_var << std::endl;         // same address
     std::cout << "&some_var_ref : " << &some_var_ref << std::endl; // same address
     std::cout << "&C : " << &C << std::endl;                       // same address

     // Variables value
     std::cout << "some_var : " << some_var << std::endl;         // 24.8
     std::cout << "some_var_ref : " << some_var_ref << std::endl; // 24.8
     std::cout << "C : " << C << std::endl;                       // 24.8
     */

     /*
     // Constness is preserved with properly deduced references
     const double some_var{23.8};

     const double &some_var_ref{some_var};

     auto &D = some_var_ref;

     std::cout << "some_var: " << some_var << std::endl;
     std::cout << "some_var_ref: " << some_var_ref << std::endl;
     std::cout << "D: " << D << std::endl;

     ++D; // Compiler Error

     std::cout << "some_var: " << some_var << std::endl;
     std::cout << "some_var_ref: " << some_var_ref << std::endl;
     std::cout << "D: " << D << std::endl;
     */

     /*
     // Constness doesn't matter with non reference deduction
     const double some_var{23.8};

     const double &some_var_ref{some_var};

     auto E = some_var_ref; // E is a separate variable, initialized with the
                            // value in some_var.

     ++E; // Can modify "E" without a problem, It's just a copy.
     */

     return 0;
}