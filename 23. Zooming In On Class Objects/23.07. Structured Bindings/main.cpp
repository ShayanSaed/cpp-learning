#include <iostream>

struct Point
{
     double x, y;
};

void print_point(const Point p)
{
     std::cout << "Point: [x: " << p.x << ", y: " << p.y << "]" << std::endl;
}

int main()
{
     Point point1 = {5.4, 8.2};

     print_point(point1);

     auto [a, b] = point1;

     std::cout << "a: " << a << std::endl;
     std::cout << "b: " << b << std::endl;

     point1.x = 7.9;
     point1.y = 4.6;

     print_point(point1);

     std::cout << "a: " << a << std::endl;
     std::cout << "b: " << b << std::endl;

     auto func = [=]()
     {
          std::cout << "a(captured): " << a << std::endl;
          std::cout << "b(captured): " << b << std::endl;
     };
     func();

     return 0;
}