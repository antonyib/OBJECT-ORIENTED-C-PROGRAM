#include <iostream>

using namespace std;

bool is_perfect_number(int num) {
 int sum_of_divisors = 1;  // 1 is always a divisor

 for (int i = 2; i * i <= num; ++i) {
   if (num % i == 0) {
     sum_of_divisors += i + num / i;  // Add both divisor and its complement
   }
 }

 return sum_of_divisors == num;
}

int main() {
 int number;

 cout << "Enter a positive integer: ";
 cin >> number;

 if (is_perfect_number(number)) {
   cout << number << " is a perfect number." << endl;
 } else {
   cout << number << " is not a perfect number." << endl;
 }

 return 0;
}
