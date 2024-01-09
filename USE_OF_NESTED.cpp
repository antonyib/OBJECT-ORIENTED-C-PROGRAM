#include <iostream>
#include <stdexcept>

using namespace std;

void innerFunction() {
    try {
        int num = 100 / 0; 
        cout << "Result: " << num << endl;
    } catch (const runtime_error& e) {
        cerr << "Inner function error: " << e.what() << endl;
        throw; 
    }
}

int main() {
    try {
        cout << "Calling inner function..." << endl;
        innerFunction();
        cout << "Inner function call completed successfully." << endl;
    } catch (const runtime_error& e) {
        cerr << "Outer function error: " << e.what() << endl;
    }

    return 0;
}
