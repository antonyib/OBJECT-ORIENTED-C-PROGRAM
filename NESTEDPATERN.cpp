#include <iostream>

using namespace std;

int main() {
 for (int i = 1; i <= 5; ++i) {
   // Print leading spaces for alignment
   for (int j = 1; j <= 5 - i; ++j) {
     cout << " ";
   }

   // Ascending part
   for (int j = 1; j <= i; ++j) {
     cout << j;
   }

   // Descending part (excluding the middle number for odd rows)
   for (int j = i - 1; j > 0; --j) {
     cout << j;
   }

   cout << endl;  // Move to the next line after each row
 }

 return 0;
}
