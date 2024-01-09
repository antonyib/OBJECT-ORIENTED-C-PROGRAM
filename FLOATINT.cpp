#include <iostream>

using namespace std;

int main() {
  double num1, num2;

  cout << "Enter two floating-point numbers: ";
  cin >> num1 >> num2;

  // Addition
  double sum = num1 + num2;
  cout << "Sum: " << sum << endl;

  // Subtraction
  double difference = num1 - num2;
  cout << "Difference: " << difference << endl;

  // Multiplication
  double product = num1 * num2;
  cout << "Product: " << product << endl;

  // Division (check for zero division)
  if (num2 != 0) {
    double quotient = num1 / num2;
    cout << "Quotient: " << quotient << endl;
  } else {
    cout << "Division by zero is not allowed." << endl;
  }

  return 0;
}
