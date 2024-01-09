#include <iostream>

using namespace std;

int main() {
    double number = 3.14159265358979323846;  
    double *ptr = &number;  
    cout << "Value of number: " << number << endl;
    cout << "Address of number: " << &number << endl;
    cout << "Value of ptr (address of number): " << ptr << endl;
    cout << "Value stored at the address pointed to by ptr: " << *ptr << endl;

    return 0;
}
