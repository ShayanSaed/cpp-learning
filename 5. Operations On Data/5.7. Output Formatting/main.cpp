#include <iostream>
#include <iomanip>

int main()
{
     /*
     std::endl : places a new line character on the output stream.
     This is identical to placing '\n' on the output stream.
     */
     std::cout << "Hello";
     std::cout << "World";

     std::cout << std::endl;

     std::cout << "_____________________________________" << std::endl;

     std::cout << "Hello" << std::endl;
     std::cout << "World" << std::endl;

     std::cout << std::endl;

     std::cout << "Hello\n";
     std::cout << "World\n";

     // _______________________________________________________________

     std::cout << std::endl;

     // std::flush: flushes the output buffer to its final destination.
     std::cout << "This is a test message written with flush!" << std::endl
               << std::flush;
     /*
     After this std::flush, we're sure that at this line, the message
     has been sent to the stream. This may be important in some applications.
     */

     // _______________________________________________________________

     std::cout << std::endl;

     /*
     std::setw(): Adjusts the field with for the item about to be printed.
     The setw() manipulator only affects the next value to be printed.
     */

     std::cout << "Unformatted table:" << std::endl;
     std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
     std::cout << "Stanley" << " " << "Woods" << " 33" << std::endl;
     std::cout << "Jordan" << " " << "Parker" << " 45" << std::endl;
     std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
     std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
     std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;

     std::cout << std::endl;
     std::cout << "Formatted table:" << std::endl;

     int col_width{14};

     std::cout << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Lastname" << std::setw(col_width / 2) << "Age" << std::endl;
     std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width / 2) << "25" << std::endl;
     std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width / 2) << "33" << std::endl;
     std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width / 2) << "45" << std::endl;
     std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width / 2) << "21" << std::endl;
     std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width / 2) << "27" << std::endl;
     std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width / 2) << "29" << std::endl;

     // _______________________________________________________________

     std::cout << std::endl;

     /*
     Justify: Values can be justified in their fields. There are three
     manipulators for adjusting the justification: left, right, and internal.
     */

     std::cout << std::endl;
     std::cout << "Left justified table:" << std::endl;

     std::cout << std::left;
     std::cout << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Lastname" << std::setw(col_width / 2) << "Age" << std::endl;
     std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width / 2) << "25" << std::endl;
     std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width / 2) << "33" << std::endl;
     std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width / 2) << "45" << std::endl;
     std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width / 2) << "21" << std::endl;
     std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width / 2) << "27" << std::endl;
     std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width / 2) << "29" << std::endl;

     // _______________________________________________________________

     std::cout << std::endl;

     // std::setfill: Filling table characters to increase readability.

     std::cout << std::left;
     std::cout << std::setfill('-');
     std::cout << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Lastname" << std::setw(col_width / 2) << "Age" << std::endl;
     std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width / 2) << "25" << std::endl;
     std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width / 2) << "33" << std::endl;
     std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width / 2) << "45" << std::endl;
     std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width / 2) << "21" << std::endl;
     std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width / 2) << "27" << std::endl;
     std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width / 2) << "29" << std::endl;

     // _______________________________________________________________

     std::cout << std::endl;

     // boolalpha and noboolapha: control bool output format (1/0 or true/false)

     bool condition{true};
     bool other_condition{false};

     std::cout << "condition: " << condition << std::endl;
     std::cout << "other_condition: " << other_condition << std::endl;

     std::cout << std::endl;
     std::cout << std::boolalpha;
     std::cout << "condition: " << condition << std::endl;
     std::cout << "other_condition: " << other_condition << std::endl;

     std::cout << std::endl;
     std::cout << std::noboolalpha;
     std::cout << "condition: " << condition << std::endl;
     std::cout << "other_condition: " << other_condition << std::endl;

     // _______________________________________________________________

     std::cout << std::endl;

     // std::showpos and std::noshowpos: show or hide the + sign for positive numbers

     int positive_number{26};
     int negitive_number{-72};

     std::cout << "positive_number: " << positive_number << std::endl;
     std::cout << "negitive_number: " << negitive_number << std::endl;

     std::cout << std::endl;
     std::cout << std::showpos;
     std::cout << "positive_number: " << positive_number << std::endl;
     std::cout << "negitive_number: " << negitive_number << std::endl;

     std::cout << std::endl;
     std::cout << std::noshowpos;
     std::cout << "positive_number: " << positive_number << std::endl;
     std::cout << "negitive_number: " << negitive_number << std::endl;

     // _______________________________________________________________

     std::cout << std::endl;

     // different number systems: std::dec, std::hex, std::oct

     int positive_integer{717171};
     int negitive_integer{-47347};
     double double_var{498.32};

     std::cout << std::endl;
     std::cout << "default base format: " << std::endl;
     std::cout << "positive_integer: " << positive_integer << std::endl;
     std::cout << "negitive_integer: " << negitive_integer << std::endl;
     std::cout << "double_var: " << double_var << std::endl;

     std::cout << std::endl;
     std::cout << "positive_integer in different bases: " << std::endl;
     std::cout << "positive_integer (decimal): " << std::dec << positive_integer << std::endl;
     std::cout << "positive_integer (hexadecimal): " << std::hex << positive_integer << std::endl;
     std::cout << "positive_integer (octal): " << std::oct << positive_integer << std::endl;

     std::cout << std::endl;
     std::cout << "negitive_integer in different bases: " << std::endl;
     std::cout << "negitive_integer (decimal): " << std::dec << negitive_integer << std::endl;
     std::cout << "negitive_integer (hexadecimal): " << std::hex << negitive_integer << std::endl;
     std::cout << "negitive_integer (octal): " << std::oct << negitive_integer << std::endl;

     std::cout << std::endl;
     std::cout << "double_var in different bases: " << std::endl;
     std::cout << "double_var (decimal): " << std::dec << double_var << std::endl;
     std::cout << "double_var (hexadecimal): " << std::hex << double_var << std::endl;
     std::cout << "double_var (octal): " << std::oct << double_var << std::endl;

     // _______________________________________________________________

     std::cout << std::endl;

     // uppercase and nouppercase

     std::cout << "positive_integer (nouppercase: DEFAULT): " << std::endl;
     std::cout << "positive_integer (decimal): " << std::dec << positive_integer << std::endl;
     std::cout << "positive_integer (hexadecimal): " << std::hex << positive_integer << std::endl;
     std::cout << "positive_integer (octal): " << std::oct << positive_integer << std::endl;

     std::cout << std::endl;
     std::cout << "positive_integer (uppercase): " << std::endl;
     std::cout << std::uppercase;
     std::cout << "positive_integer (decimal): " << std::dec << positive_integer << std::endl;
     std::cout << "positive_integer (hexadecimal): " << std::hex << positive_integer << std::endl;
     std::cout << "positive_integer (octal): " << std::oct << positive_integer << std::endl;

     // _______________________________________________________________

     std::cout << std::endl;

     // fixed and scientific: for floating point values

     double a{3.1415926535897932384626433832795}, b{2006.0}, c{1.34e-10};

     std::cout << std::endl;
     std::cout << "double values (DEFAULT: use scientific where necessary): " << std::endl;
     std::cout << "a: " << a << std::endl;
     std::cout << "b: " << b << std::endl;
     std::cout << "c: " << c << std::endl;

     std::cout << std::endl;
     std::cout << "double values (FIXED): " << std::endl;
     std::cout << std::fixed;
     std::cout << "a: " << a << std::endl;
     std::cout << "b: " << b << std::endl;
     std::cout << "c: " << c << std::endl;

     std::cout << std::endl;
     std::cout << "double values (SCIENTIFIC): " << std::endl;
     std::cout << std::scientific;
     std::cout << "a: " << a << std::endl;
     std::cout << "b: " << b << std::endl;
     std::cout << "c: " << c << std::endl;

     std::cout << std::endl;
     std::cout << "double values (back to defaults): " << std::endl;
     std::cout.unsetf(std::ios::scientific | std::ios::fixed);
     std::cout << "a: " << a << std::endl;
     std::cout << "b: " << b << std::endl;
     std::cout << "c: " << c << std::endl;

     // _______________________________________________________________

     std::cout << std::endl;

     /*
     setprecision(): the number of digits printed out for a floating point.
     DEFAULT: 6
     */

     std::cout << std::endl;
     std::cout << "a (default precision(6)): " << a << std::endl;
     std::cout << std::setprecision(10);
     std::cout << "a (precision(10)): " << a << std::endl;
     std::cout << std::setprecision(20);
     std::cout << "a (precision(20)): " << a << std::endl;

     // ❗ If the precision is bigger than supported by the type, you'll just print garbage.

     // _______________________________________________________________

     std::cout << std::endl;

     /*
     showpoint and noshowpoint: show trailing zeros if necessary
     Force output of the decimal point
     */

     double d{34.1}, e{101.99}, f{12.0};
     int g{45};

     std::cout << std::endl;
     std::cout << "noshowpoint (DEFAULT): " << std::endl;
     std::cout << "d : " << d << std::endl;
     std::cout << "e : " << e << std::endl;
     std::cout << "f : " << f << std::endl; // 12
     std::cout << "g : " << g << std::endl;

     std::cout << std::endl;
     std::cout << "showpoint: " << std::endl;
     std::cout << std::showpoint;
     std::cout << "d : " << d << std::endl;
     std::cout << "e : " << e << std::endl;
     std::cout << "f : " << f << std::endl; // 12.0
     std::cout << "g : " << g << std::endl;

     return 0;
}
