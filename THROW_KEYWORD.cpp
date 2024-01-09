#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    try {
        int age;
        cout << "Enter your age: ";
        cin >> age;

        if (age < 18) {
            throw runtime_error("You are not eligible to vote.");
        } else {
            cout << "You are eligible to vote." << endl;
        }
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
