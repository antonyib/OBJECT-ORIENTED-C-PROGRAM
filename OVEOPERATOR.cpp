#include <iostream>

using namespace std;

class Array {
private:
    int* arr;
    int size;

public:
    // Constructor to initialize the array
    Array(int s) : size(s) {
        arr = new int[size];
    }

    // Overloaded [] operator to access elements
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Array index out of bounds");
        }
        return arr[index];
    }

    // Function to display the array elements
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor to deallocate memory
    ~Array() {
        delete[] arr;
    }
};

int main() {
    Array arr(5);  // Create an array of size 5

    // Access and modify elements using the overloaded [] operator
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
    }

    cout << "Array elements: ";
    arr.display();  // Output: 0 10 20 30 40

    return 0;
}
