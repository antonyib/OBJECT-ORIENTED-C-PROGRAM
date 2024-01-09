#include <iostream>

using namespace std;

void insert_element(int arr[], int &size, int element, int position) {
 // Check for valid position
 if (position < 0 || position > size) {
   cout << "Invalid position! Please enter a position between 0 and " << size << endl;
   return;
 }

 // Shift elements to the right to make space for the new element
 for (int i = size - 1; i >= position; --i) {
   arr[i + 1] = arr[i];
 }

 // Insert the new element at the specified position
 arr[position] = element;

 // Increment the size of the array
 size++;
}

int main() {
 int arr[] = {1, 2, 4, 5};
 int size = sizeof(arr) / sizeof(arr[0]);
 int element = 3, position = 2;  // Element to insert and its position

 cout << "Original array: ";
 for (int i = 0; i < size; ++i) {
   cout << arr[i] << " ";
 }
 cout << endl;

 insert_element(arr, size, element, position);

 cout << "Array after insertion: ";
 for (int i = 0; i < size; ++i) {
   cout << arr[i] << " ";
 }
 cout << endl;

 return 0;
}
