#include <iostream>

using namespace std;

int main() {
  int number;

  cout << "Enter an integer: ";
  cin >> number;

  // Use if-else statements to determine the sign
  if (number > 0) {
    cout << number << " is positive." << endl;
  } else if (number < 0) {
    cout << number << " is negative." << endl;
  } else {
    cout << number << " is zero." << endl;
  }

  return 0;
}
