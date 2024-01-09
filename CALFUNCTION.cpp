#include <iostream>

using namespace std;

class Callable {
public:
    // Overloaded () operator to call the object like a function
    int operator()(int a, int b) {
        return a + b;  // Replace with your desired function logic
    }
};

int main() {
    Callable callable;

    int result = callable(5, 3);  // Call the object like a function
    cout << "Result: " << result << endl;

    return 0;
}
