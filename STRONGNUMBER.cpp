#include <iostream>

using namespace std;

bool is_strong_number(int num) {
 int sum_of_factorials = 0, temp = num;

 while (temp > 0) {
   int digit = temp % 10;
   int factorial = 1;

   // Calculate factorial of the digit
   for (int i = 1; i <= digit; ++i) {
     factorial *= i;
   }

   sum_of_factorials += factorial;
   temp /= 10;
 }

 return num == sum_of_factorials;
}

int main() {
 int number;

 cout << "Enter a positive integer: ";
 cin >> number;

 if (is_strong_number(number)) {
   cout << number << " is a strong number." << endl;
 } else {
   cout << number << " is not a strong number." << endl;
 }

 return 0;
}
