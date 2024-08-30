#include <iostream>
#include <string>
#include <cmath>

// Base class for geometric shapes
class Shape {
public:
    Shape(const std::string& color = "None") : color(color) {}

    // Pure virtual functions for area and perimeter
    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    // Function to set the color of the shape
    void setColor(const std::string& color) {
        this->color = color;
    }

    // Function to get the color of the shape
    std::string getColor() const {
        return color;
    }

    virtual ~Shape() {}

protected:
    std::string color;
};

// Derived class for Rectangle
class Rectangle : public Shape {
public:
    Rectangle(double width, double height, const std::string& color = "None") 
        : Shape(color), width(width), height(height) {}

    double area() const override {
        return width * height;
    }

    double perimeter() const override {
        return 2 * (width + height);
    }

private:
    double width;
    double height;
};

// Derived class for Square
class Square : public Rectangle {
public:
    Square(double side, const std::string& color = "None") 
        : Rectangle(side, side, color) {}

    // Inherits area and perimeter calculations from Rectangle
};

// Derived class for Triangle
class Triangle : public Shape {
public:
    Triangle(double a, double b, double c, const std::string& color = "None") 
        : Shape(color), a(a), b(b), c(c) {}

    double area() const override {
        double s = (a + b + c) / 2.0;
        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double perimeter() const override {
        return a + b + c;
    }

private:
    double a;
    double b;
    double c;
};

int main() {
    // Creating shapes
    Rectangle rect(10.0, 5.0, "Red");
    Square sq(4.0, "Blue");
    Triangle tri(3.0, 4.0, 5.0, "Green");

    // Displaying area, perimeter, and color of each shape
    std::cout << "Rectangle: \n";
    std::cout << "Area: " << rect.area() << "\n";
    std::cout << "Perimeter: " << rect.perimeter() << "\n";
    std::cout << "Color: " << rect.getColor() << "\n\n";

    std::cout << "Square: \n";
    std::cout << "Area: " << sq.area() << "\n";
    std::cout << "Perimeter: " << sq.perimeter() << "\n";
    std::cout << "Color: " << sq.getColor() << "\n\n";

    std::cout << "Triangle: \n";
    std::cout << "Area: " << tri.area() << "\n";
    std::cout << "Perimeter: " << tri.perimeter() << "\n";
    std::cout << "Color: " << tri.getColor() << "\n";

    return 0;
}
