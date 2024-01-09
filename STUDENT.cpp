#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNo;
    string address;

public:
    // Constructor to initialize student details
    Student(const string& name, int rollNo, const string& address) :
        name(name), rollNo(rollNo), address(address) {
        cout << "Student object created: " << name << " (Roll No.: " << rollNo << ")\n";
    }

    // Destructor to print a message when the student object is destroyed
    ~Student() {
        cout << "Student object destroyed: " << name << endl;
    }

    // Member functions to access student information (optional)
    string getName() const { return name; }
    int getRollNo() const { return rollNo; }
    string getAddress() const { return address; }
};

int main() {
    // Create a student object
    Student student1("Alice", 123, "Wonderland");

    return 0;
}