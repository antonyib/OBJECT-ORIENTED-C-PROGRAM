#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

int main() {
    try {
        int choice;
        cout << "Enter 1 to throw an integer exception, 2 to throw a string exception, "
                "or any other number for an invalid_argument exception: ";
        cin >> choice;

        if (choice == 1) {
            throw 42; 
        } else if (choice == 2) {
            throw string("A string exception occurred!");
        } else {
            throw invalid_argument("Invalid choice!"); 
        }
    } catch (int e) {
        cout<< "Caught an integer exception: " << e << endl;
    } catch (const string& e) {
        cout << "Caught a string exception: " << e << endl;
    } catch (const invalid_argument& e) {
        cout << "Caught an invalid_argument exception: " << e.what() << endl;
    } catch (...) {  
        cout << "Caught an unexpected exception!" << endl;
    }

    return 0;
}
