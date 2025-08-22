#include <iostream>

// Tools
const int Pen{10}, Marker{20}, Eraser{30}, Rectangle{40}, Circle{50}, Ellipse{60};

int main()
{
     int tool{Circle};

     if (tool == Pen)
     {
          std::cout << "Active tool is Pen" << std::endl;
     }
     else if (tool == Marker)
     {
          std::cout << "Active tool is Marker" << std::endl;
     }
     else if (tool == Eraser)
     {
          std::cout << "Active tool is Eraser" << std::endl;
     }
     else if (tool == Rectangle)
     {
          std::cout << "Active tool is Rectangle" << std::endl;
     }
     else if (tool == Circle)
     {
          std::cout << "Active tool is Circle" << std::endl;
     }
     else if (tool == Ellipse)
     {
          std::cout << "Active tool is Ellipse" << std::endl;
     }

     std::cout << "Moving on" << std::endl;

     return 0;
}