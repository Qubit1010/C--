#include <iostream>
#include <string>
using namespace std;

// --------------------- Base Class ---------------------
class Shape {
private:
    string name;

public:
    // Constructor
    Shape(string n) {
        name = n;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Setter for name
    void setName(string n) {
        name = n;
    }

    // Virtual function for polymorphism
    virtual void displayDetails() const {
        cout << "Shape: " << name << endl;
    }

    // Virtual destructor (important for base classes)
    virtual ~Shape() {}
};

// --------------------- Derived Class: Circle ---------------------
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : Shape("Circle") {
        radius = r;
    }

    // Getter and Setter
    double getRadius() const {
        return radius;
    }

    void setRadius(double r) {
        radius = r;
    }

    // Calculate Area
    double getArea() const {
        return 3.14159 * radius * radius;
    }

    // Override displayDetails
    void displayDetails() const override {
        cout << "Shape: " << getName() << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << getArea() << endl;
    }
};

// --------------------- Derived Class: Rectangle ---------------------
class Rectangle : public Shape {
private:
    double length, width;

public:
    // Constructor
    Rectangle(double l, double w) : Shape("Rectangle") {
        length = l;
        width = w;
    }

    // Getters and Setters
    double getLength() const {
        return length;
    }

    void setLength(double l) {
        length = l;
    }

    double getWidth() const {
        return width;
    }

    void setWidth(double w) {
        width = w;
    }

    // Calculate Area
    double getArea() const {
        return length * width;
    }

    // Override displayDetails
    void displayDetails() const override {
        cout << "Shape: " << getName() << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << getArea() << endl;
    }
};

// --------------------- Main Function ---------------------
int main() {
    // Create Circle object
    Circle c(5.0);

    // Create Rectangle object
    Rectangle r(4.0, 6.0);

    // Display details
    cout << "---- Circle Details ----" << endl;
    c.displayDetails();

    cout << "\n---- Rectangle Details ----" << endl;
    r.displayDetails();

    return 0;
}
