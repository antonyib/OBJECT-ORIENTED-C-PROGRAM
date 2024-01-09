#include <iostream>

using namespace std;

int main() {
   char initial = 'A';  // Declare and initialize a char variable
   char *ptr = &initial;  // Declare a pointer to a char and assign it the address of initial

   cout << "Value of initial: " << initial << endl;
   cout << "Address of initial: " << &initial << endl;
   cout << "Value of ptr (address of initial): " << ptr << endl;
   cout << "Value stored at the address pointed to by ptr: " << *ptr << endl;

   return 0;
}
