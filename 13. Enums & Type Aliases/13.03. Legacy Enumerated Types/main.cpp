#include <iostream>

enum Direction
{
     TopLeft,
     TopRight,
     Center,
     BottomLeft,
     BottomRight
};

enum Tool
{
     Pen,
     Marker,
     Eraser,
     Rectangle,
     Circle,
     PaintBucket
};

int main()
{
     Direction direction{Center};

     Tool tool{Marker};

     std::cout << "direction: " << direction << std::endl; // 2
     std::cout << "tool: " << tool << std::endl;           // 1

     return 0;
}