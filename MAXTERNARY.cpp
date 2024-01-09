#include <iostream>

using namespace std;

int main() {
  int num1, num2, num3;

  cout << "Enter three integers: ";
  cin >> num1 >> num2 >> num3;

  // Use the ternary operator to find the maximum
  int maximum = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

  cout << "The maximum number is: " << maximum << endl;

  return 0;
}
