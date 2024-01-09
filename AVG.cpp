#include <iostream>

using namespace std;

int main() {
  int num1, num2, num3;
  double average;

  cout << "Enter three integers: ";
  cin >> num1 >> num2 >> num3;

  // Calculate the average using assignment operator
  average = (num1 + num2 + num3) / 3.0;  // Use 3.0 for floating-point division

  // Display the average
  cout << "The average of the three numbers is: " << average << endl;

  return 0;
}
