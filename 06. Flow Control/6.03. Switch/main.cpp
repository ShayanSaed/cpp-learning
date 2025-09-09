#include <iostream>

// Tools
const int Pen{10}, Marker{20}, Eraser{30}, Rectangle{40}, Circle{50}, Ellipse{60};

int main()
{
     int tool{Circle};

     switch (tool)
     {
          case Pen:
          {
               std::cout << "Active tool is Pen" << std::endl;
          }
          break;

          case Marker:
          {
               std::cout << "Active tool is Marker" << std::endl;
          }
          break;

          case Eraser:
          {
               std::cout << "Active tool is Eraser" << std::endl;
          }
          break;

          case Rectangle:
          {
               std::cout << "Active tool is Rectangle" << std::endl;
          }
          break;

          case Circle:
          {
               std::cout << "Active tool is Circle" << std::endl;
          }
          break;

          case Ellipse:
          {
               std::cout << "Active tool is Ellipse" << std::endl;
          }
          break;

          default:
          {
               std::cout << "No match found" << std::endl;
          }
          break;
     }

     std::cout << "Moving on" << std::endl;

     return 0;
}