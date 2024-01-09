#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    try {
        int num1, num2;

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        if (num2 == 0) {
            throw runtime_error("Cannot divide by zero!"); 
        }

        int result = num1 / num2;
        cout << "Result: " << result << endl;
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl; 
    } catch (const exception& e) { 
        cerr << "Standard exception occurred: " << e.what() << endl;
    }

    return 0;
}
