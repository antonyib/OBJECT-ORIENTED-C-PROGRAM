#include <iostream>

using namespace std;

int main() {
    int num = 42;  
    int *ptr = &num;  
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr (address of num): " << ptr << endl;
    cout << "Value stored at the address pointed to by ptr: " << *ptr << endl;

    return 0;
}
