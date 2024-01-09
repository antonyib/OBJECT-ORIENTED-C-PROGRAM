#include <iostream>
#include <cmath>  // For pow function

using namespace std;

bool is_armstrong_number(int num) {
 int original_num = num, sum_of_cubes = 0, digits = 0;

 // Count the number of digits
 while (original_num > 0) {
   original_num /= 10;
   digits++;
 }

 original_num = num;  

 // Calculate the sum of cubes of digits
 while (original_num > 0) {
   int digit = original_num % 10;
   sum_of_cubes += pow(digit, digits);  // Use pow for efficient calculation
   original_num /= 10;
 }

 return num == sum_of_cubes;  
}

int main() {
 int number;

 cout << "Enter a positive integer: ";
 cin >> number;

 if (is_armstrong_number(number)) {
   cout << number << " is an Armstrong number." << endl;
 } else {
   cout << number << " is not an Armstrong number." << endl;
 }

 return 0;
}
