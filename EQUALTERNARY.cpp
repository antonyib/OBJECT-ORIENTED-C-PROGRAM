#include <iostream>

using namespace std;

int main() {
 int num1, num2;

 cout << "Enter two integers: ";
 cin >> num1 >> num2;

 // Use the ternary conditional operator to determine equality
 string equal = num1 == num2 ? "Yes" : "No";

 cout << "Are " << num1 << " and " << num2 << " equal? " << equal << endl;

 return 0;
}
