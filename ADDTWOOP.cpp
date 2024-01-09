#include <iostream>

using namespace std;

class Point {
public:
   int x, y;

   // Constructor to initialize coordinates
   Point(int x = 0, int y = 0) : x(x), y(y) {}

   // Overloaded += operator to add two points
   Point& operator+=(const Point& other) {
       x += other.x;
       y += other.y;
       return *this;  // Return the updated object
   }

   // Function to display the point coordinates
   void display() const {
       cout << "(" << x << ", " << y << ")" << endl;
   }
};

int main() {
   Point p1(1, 2);
   Point p2(3, 4);

   p1 += p2;  // Add p2 to p1 using overloaded += operator

   cout << "Sum of points: ";
   p1.display();  // Output: (4, 6)

   return 0;
}
