#include <iostream>

using namespace std;

void reverse_array(int arr[], int size) {
  for (int i = 0; i < size / 2; ++i) {
    // Swap elements from opposite ends
    int temp = arr[i];
    arr[i] = arr[size - i - 1];
    arr[size - i - 1] = temp;
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);  // Determine array size dynamically

  cout << "Original array: ";
  for (int i = 0; i < size; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;

  reverse_array(arr, size);

  cout << "Reversed array: ";
  for (int i = 0; i < size; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
