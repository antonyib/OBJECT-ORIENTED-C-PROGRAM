#include <iostream>

using namespace std;

// User-defined class
class Person {
public:
   string name;
   int age;

   // Constructor to initialize data members
   Person(const string& name, int age) : name(name), age(age) {}

   // Friend function to overload the << operator (outside the class)
   friend ostream& operator<<(ostream& os, const Person& person) {
       os << "Name: " << person.name << ", Age: " << person.age;
       return os;  // Return the ostream object to allow chaining
   }
};

int main() {
   Person person("Alice", 30);

   // Use the overloaded << operator to print the Person object
   cout << "Person details: " << person << endl;

   return 0;
}
