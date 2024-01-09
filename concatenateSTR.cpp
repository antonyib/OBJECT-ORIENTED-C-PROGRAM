#include <iostream>
#include <string>
#include <cstring>

using namespace std;
string concatenate(const string& str1, const string& str2) {
   return str1 + str2;
}
char* concatenate(const char* arr1, const char* arr2) {
   int len1 = strlen(arr1);
   int len2 = strlen(arr2);
   int totalLen = len1 + len2 + 1; 
   char* result = new char[totalLen];
   strcpy(result, arr1);
   strcat(result, arr2);
    return result;
}

int main() {
   string str1 = "Hello ", str2 = "World!";
   char arr1[] = "Hi ", arr2[] = "there!";
   string strResult = concatenate(str1, str2);
   cout << "Concatenated strings: " << strResult << endl;
   char* arrResult = concatenate(arr1, arr2);
   cout << "Concatenated arrays: " << arrResult << endl;
   delete[] arrResult;
    return 0;
}
