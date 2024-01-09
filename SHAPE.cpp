#include <iostream>

using namespace std;

class Shape {
public:
    virtual double area() = 0;  // Pure virtual function to make Shape an abstract class
};

class Rectangle : public Shape {
public:
    Rectangle(double width, double height) : width(width), height(height) {}

    double area() override {
        return width * height;
    }

private:
    double width, height;
};

class Circle : public Shape {
public:
    Circle(double radius) : radius(radius) {}

    double area() override {
        return 3.14159 * radius * radius;
    }

private:
    double radius;
};

int main() {
    Rectangle rectangle(5, 10);
    Circle circle(7);

    Shape* shapes[] = {&rectangle, &circle};

    for (Shape* shape : shapes) {
        cout << "Area of shape: " << shape->area() << endl;
    }

    return 0;
}