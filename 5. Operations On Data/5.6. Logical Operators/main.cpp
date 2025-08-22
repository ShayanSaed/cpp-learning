#include <iostream>

int main()
{
     bool a{true}, b{false}, c{true};

     std::cout << std::boolalpha;
     std::cout << "a: " << a << std::endl;
     std::cout << "b: " << b << std::endl;
     std::cout << "c: " << c << std::endl;

     std::cout << std::endl;
     std::cout << "Basic AND operations" << std::endl;

     std::cout << "a && b: " << (a && b) << std::endl;           // false
     std::cout << "a && c: " << (a && c) << std::endl;           // true
     std::cout << "a && b && c: " << (a && b && c) << std::endl; // false

     std::cout << std::endl;
     std::cout << "Basic OR operations" << std::endl;

     std::cout << "a || b: " << (a || b) << std::endl;           // true
     std::cout << "a || c: " << (a || c) << std::endl;           // true
     std::cout << "a || b || c: " << (a || b || c) << std::endl; // true

     std::cout << std::endl;
     std::cout << "Basic NOT operations" << std::endl;

     std::cout << "!a: " << !a << std::endl; // false
     std::cout << "!b: " << !b << std::endl; // true
     std::cout << "!c: " << !c << std::endl; // false

     // ________________________________________________________

     // Combinations of all these operators
     std::cout << std::endl;
     std::cout << "Combining logical operators" << std::endl;

     std::cout << "!(a && b) || c: " << (!(a && b) || c) << std::endl; // true

     // ________________________________________________________

     // Combining logical operators with relational operators
     int d{45}, e{20}, f{11};

     std::cout << std::endl;
     std::cout << "Relational and logic operations on integers" << std::endl;

     std::cout << "d: " << d << std::endl;
     std::cout << "e: " << e << std::endl;
     std::cout << "f: " << f << std::endl;

     std::cout << std::endl;

     std::cout << "(d > e) && (d > f): " << ((d > e) && (d > f)) << std::endl;     // true
     std::cout << "(d == e) || (e <= f): " << ((d == e) || (e <= f)) << std::endl; // false
     std::cout << "(d < e) || (d > f): " << ((d < e) || (d > f)) << std::endl;     // true
     std::cout << "(f > e) || (d < f): " << ((f > e) || (d < f)) << std::endl;     // false
     std::cout << "(d > f) && (f <= d): " << ((d > f) && (f <= d)) << std::endl;   // true
     std::cout << "(d > e) && (d <= f): " << ((d > e) && (d <= f)) << std::endl;   // false
     std::cout << "(!a) && (d == e): " << ((!a) && (d == e)) << std::endl;         // false

     return 0;
}