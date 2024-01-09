#include <iostream>

using namespace std;

int main() {
   float pi = 3.14159;  
   float *ptr = &pi;  
   cout << "Value of pi: " << pi << endl;
   cout << "Address of pi: " << &pi << endl;
   cout << "Value of ptr (address of pi): " << ptr << endl;
   cout << "Value stored at the address pointed to by ptr: " << *ptr << endl;

   return 0;
}
