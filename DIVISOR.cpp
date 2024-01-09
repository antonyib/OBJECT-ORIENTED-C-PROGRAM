#include <iostream>

using namespace std;

int main() {
 int num1, num2, gcd;

 cout << "Enter two positive integers: ";
 cin >> num1 >> num2;

 // Ensure positive input
 if (num1 <= 0 || num2 <= 0) {
   cout << "Invalid input: Please enter positive integers." << endl;
   return 1;  // Indicate error
 }

 do {
   gcd = num1 % num2;
   num1 = num2;
   num2 = gcd;
 } while (num2 != 0);

 cout << "The greatest common divisor of " << num1 << " and " << num2 << " is: " << gcd << endl;

 return 0;
}
