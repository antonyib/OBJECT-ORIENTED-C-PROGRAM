#include <iostream>

using namespace std;

int main() {
 int number, factorial = 1;

 cout << "Enter a non-negative integer: ";
 cin >> number;

 if (number < 0) {
   cout << "Factorial is not defined for negative numbers." << endl;
 } else {
   for (int i = 1; i <= number; ++i) {
     factorial *= i;  // Multiply factorial by i in each iteration
   }

   cout << "The factorial of " << number << " is " << factorial << endl;
 }

 return 0;
}
