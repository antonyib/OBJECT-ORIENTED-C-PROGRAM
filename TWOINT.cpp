#include <iostream>

using namespace std;

int main() {
 int num1, num2;

 cout << "Enter two integers: ";
 cin >> num1 >> num2;

 // Perform the arithmetic operations
 int sum = num1 + num2;
 int difference = num1 - num2;
 int product = num1 * num2;
 float quotient = (float)num1 / num2;  // Use float for division to get decimal result
 int modulo = num1 % num2;

 // Print the results
 cout << "Sum: " << sum << endl;
 cout << "Difference: " << difference << endl;
 cout << "Product: " << product << endl;
 cout << "Quotient: " << quotient << endl;
 cout << "Modulo: " << modulo << endl;

 return 0;
}
