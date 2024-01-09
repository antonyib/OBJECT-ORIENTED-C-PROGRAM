#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    // Constructor to initialize car details
    Car(const string& comp, const string& mdl, int yr) :
        company(comp), model(mdl), year(yr) {
        cout << "Car created: " << company << " " << model << " (" << year << ")\n";
    }

    // Destructor to print a message when the car object is destroyed
    ~Car() {
        cout << "Car destroyed: " << company << " " << model << endl;
    }
};

int main() {
    // Create a car object
    Car car1("Toyota", "Camry", 2023);

    // The destructor will be called automatically when the car1 object goes out of scope

    return 0;
}
