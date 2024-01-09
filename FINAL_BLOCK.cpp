#include <iostream>

using namespace std;

void doSomething() {
    cout << "Doing something..." << endl;
}

void cleanup() {
    cout << "Cleaning up resources..." << endl;
}

int main() {
    try {
        doSomething(); 
    } catch (...) { 
        cerr << "An exception occurred!" << endl;
    }

    cleanup(); 
    return 0;
}
