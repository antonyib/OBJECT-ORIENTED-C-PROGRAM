#include <iostream>

using namespace std;

// Class to represent a complex number
class Complex {
public:
   float real, imag;

   // Constructor to initialize complex numbers
   Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

   // Overloaded + operator to add two complex numbers
   Complex operator+(const Complex& other) const {
       return Complex(real + other.real, imag + other.imag);
   }

   // Function to display the complex number
   void display() const {
       cout << real << " + " << imag << "i" << endl;
   }
};

int main() {
   Complex c1(3, 2);   // First complex number (3 + 2i)
   Complex c2(1, 7);   // Second complex number (1 + 7i)
   Complex c3 = c1 + c2;  // Add using overloaded + operator

   cout << "Sum of complex numbers: ";
   c3.display();          // Display the result (4 + 9i)

   return 0;
}
