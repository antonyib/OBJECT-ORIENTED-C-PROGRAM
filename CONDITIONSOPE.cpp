#include <iostream>

using namespace std;

int main() {
 int num1, num2;

 cout << "Enter two integers: ";
 cin >> num1 >> num2;

 // Use the conditional operator to determine the greater number
 int greater_number = num1 > num2 ? num1 : num2;

 cout << "The greater number is: " << greater_number << endl;

 return 0;
}
