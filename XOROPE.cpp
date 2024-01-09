#include <iostream>

using namespace std;

int main() {
 int num1, num2;

 cout << "Enter two integers: ";
 cin >> num1 >> num2;

 // Swap values using bitwise XOR
 num1 ^= num2;
 num2 ^= num1;
 num1 ^= num2;

 cout << "Values after swapping: " << endl;
 cout << "num1: " << num1 << endl;
 cout << "num2: " << num2 << endl;

 return 0;
}
