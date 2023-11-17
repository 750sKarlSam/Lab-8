#include <iostream>
#include "shapes.h"
#include <vector>

Shape::Shape(std::string name)
{
  this->name = name;
}

Shape::~Shape()
{
}

std::string Shape::description()
{
  return name + " has area: " + std::to_string(area());
}

Square::Square(double width) : Shape("Square")
{
  this->width = width;
}

double Square::area()
{
  return width * width;
}


Rectangle::Rectangle(double width, double height) : Shape("Rectangle")
{
  this->width = width;
  this->height = height;
}

double Rectangle::area()
{
  return width * height;
}

Circle::Circle (double radius) : Shape("Circle")
{
    this->radius = radius;
}
double Circle::area(){
    return radius*radius;
}


int main() {
    std::vector<Shape*> ciry; // empty vector

    ciry.push_back(new Circle(4.0));
    ciry.push_back(new Rectangle(4.0, 4.0));
    ciry.push_back(new Square(4.0));
    ciry.push_back(new Circle(4.0));


    for(auto const &c : ciry) {
        
        std:: cout << (*c).description() << '\n';
    }
}