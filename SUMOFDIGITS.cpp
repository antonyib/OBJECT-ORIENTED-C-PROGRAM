#include <iostream>

using namespace std;

int main() {
  int number, digit, sum = 0;

  cout << "Enter a positive integer: ";
  cin >> number;

  
  if (number < 0) {
    cout << "Invalid input: Please enter a positive integer." << endl;
  } else {
    while (number > 0) {
      digit = number % 10;  
      sum += digit;        
      number /= 10;        // Remove the last digit from the number
    }

    cout << "The sum of the digits is: " << sum << endl;
  }

  return 0;
}
