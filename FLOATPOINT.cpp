#include <iostream>

using namespace std;

// Overloaded function to add two numbers
int add(int a, int b) {
  return a + b;
}

double add(double a, double b) {
  return a + b;
}

int main() {
  int integer_sum = add(1, 2);
  double float_sum = add(1.5, 2.25);

  cout << "Integer sum: " << integer_sum << endl;
  cout << "Float sum: " << float_sum << endl;

  return 0;
}
