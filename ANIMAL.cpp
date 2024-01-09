#include <iostream>

using namespace std;

class Animal {
public:
    virtual void speak() = 0;  // Pure virtual function to make Animal an abstract class
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Meow!" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Woof!" << endl;
    }
};

int main() {
    Cat cat;
    Dog dog;

    Animal* animals[] = {&cat, &dog};

    for (Animal* animal : animals) {
        animal->speak();
    }

    return 0;
}
 