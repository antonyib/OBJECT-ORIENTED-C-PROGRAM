#include <iostream>

using namespace std;

// Overloaded function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}
double max(double a, double b) {
    return (a > b) ? a : b;
}
char max(char a, char b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 10, num2 = 20;
    double fnum1 = 3.14, fnum2 = 2.71;
    char ch1 = 'A', ch2 = 'B';

    cout << "Maximum integer: " << max(num1, num2) << endl;
    cout << "Maximum floating-point number: " << max(fnum1, fnum2) << endl;
    cout << "Maximum character: " << max(ch1, ch2) << endl;

    return 0;
}
