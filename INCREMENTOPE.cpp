#include <iostream>

using namespace std;

class Counter {
public:
    int count;

    // Constructor to initialize the counter
    Counter(int c = 0) : count(c) {}

    // Overloaded ++ operator for prefix increment (returns the incremented value)
    Counter& operator++() {
        count++;
        return *this;  // Return the updated object
    }

    // Overloaded ++ operator for postfix increment (returns the original value)
    Counter operator++(int) {  // Dummy int argument to distinguish postfix
        Counter temp = *this;  // Create a temporary copy
        count++;               // Increment the actual object
        return temp;           // Return the original value
    }

    void display() const {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(5);

    cout << "Prefix increment:\n";
    // Prefix increment: c1 is incremented before its value is used
    Counter c2 = ++c1;
    c1.display();  // Output: Count: 6
    c2.display();  // Output: Count: 6 (c2 also holds the incremented value)

    cout << "\nPostfix increment:\n";
    // Postfix increment: c1 is incremented after its value is used
    Counter c3 = c1++;
    c1.display();  // Output: Count: 7
    c3.display();  // Output: Count: 6 (c3 holds the original value before increment)

    return 0;
}
