#include <iostream>

using namespace std;

int main() {
  char ch;

  cout << "Enter a character: ";
  cin >> ch;

  // Convert to lowercase for case-insensitive comparison
  ch = tolower(ch);

  // Check for vowels using efficient conditions
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    cout << ch << " is a vowel." << endl;
  } else if (isalpha(ch)) {  // Check if it's an alphabet before checking for consonants
    cout << ch << " is a consonant." << endl;
  } else {
    cout << ch << " is not an alphabet." << endl;
  }

  return 0;
}
