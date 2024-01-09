#include <iostream>
#include <cmath>  
using namespace std;

int main() {
  double number;

  cout << "Enter a floating-point number: ";
  cin >> number;

  
  int rounded_down = floor(number);

 
  int rounded_up = ceil(number);

  cout << "Rounded down (floor): " << rounded_down << endl;
  cout << "Rounded up (ceil): " << rounded_up << endl;

  return 0;
}
