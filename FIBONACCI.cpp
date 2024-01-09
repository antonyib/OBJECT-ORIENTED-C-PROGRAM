#include <iostream>

using namespace std;

int main() {
  int n, t1 = 0, t2 = 1, nextTerm;

  cout << "Enter a positive integer: ";
  cin >> n;

  cout << "Fibonacci Series: ";

  cout << t1 << ", " << t2;  // Print the first two terms

  for (int i = 3; i <= n; ++i) {
    nextTerm = t1 + t2;
    cout << ", " << nextTerm;
    t1 = t2;
    t2 = nextTerm;  // Update values for the next iteration
  }

  cout << endl;

  return 0;
}
