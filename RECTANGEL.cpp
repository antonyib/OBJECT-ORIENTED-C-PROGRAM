#include <iostream>

using namespace std;

// User-defined class
class Rectangle {
public:
    int width, height;

    // Constructor to initialize dimensions
    Rectangle(int w, int h) : width(w), height(h) {}

    // Overloaded == operator to compare two rectangles
    bool operator==(const Rectangle& other) const {
        return width == other.width && height == other.height;
    }
};

int main() {
    Rectangle rect1(5, 3);
    Rectangle rect2(5, 3);
    Rectangle rect3(4, 2);

    // Compare rect1 and rect2
    if (rect1 == rect2) {
        cout << "Rectangles rect1 and rect2 are equal." << endl;
    } else {
        cout << "Rectangles rect1 and rect2 are not equal." << endl;
    }

    // Compare rect1 and rect3
    if (rect1 == rect3) {
        cout << "Rectangles rect1 and rect3 are equal." << endl;
    } else {
        cout << "Rectangles rect1 and rect3 are not equal." << endl;
    }

    return 0;
}
