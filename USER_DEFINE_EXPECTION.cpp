#include <iostream>
#include <stdexcept>  // For base exception class

using namespace std;

// Custom exception class for negative age
class NegativeAgeException : public runtime_error {
public:
    NegativeAgeException() : runtime_error("Age cannot be negative") {}
};

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 0) {
            throw NegativeAgeException();
        }

        cout << "Your age is: " << age << endl;
    }
    catch (const NegativeAgeException& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
 