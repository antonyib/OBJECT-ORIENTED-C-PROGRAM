#include <iostream>

using namespace std;

class Matrix {
private:
   int rows, cols;
   int** data;  // Array to store matrix elements

public:
   // Constructor to initialize matrix dimensions and allocate memory
   Matrix(int r, int c) : rows(r), cols(c) {
       data = new int*[rows];
       for (int i = 0; i < rows; i++) {
           data[i] = new int[cols];
       }
   }

   // Destructor to deallocate memory
   ~Matrix() {
       for (int i = 0; i < rows; i++) {
           delete[] data[i];
       }
       delete[] data;
   }

   // Overloaded * operator to multiply two matrices
   Matrix operator*(const Matrix& other) const {
       if (cols != other.rows) {
           throw invalid_argument("Incompatible matrix dimensions for multiplication");
       }

       Matrix result(rows, other.cols);
       for (int i = 0; i < rows; i++) {
           for (int j = 0; j < other.cols; j++) {
               int sum = 0;
               for (int k = 0; k < cols; k++) {
                   sum += data[i][k] * other.data[k][j];
               }
               result.data[i][j] = sum;
           }
       }
       return result;
   }

   // Function to display the matrix elements
   void display() const {
       for (int i = 0; i < rows; i++) {
           for (int j = 0; j < cols; j++) {
               cout << data[i][j] << " ";
           }
           cout << endl;
       }
   }

   // Function to get a matrix element (for input)
   int& operator()(int i, int j) {
       return data[i][j];
   }
};

int main() {
   Matrix m1(2, 3);
   Matrix m2(3, 2);

   // Get input for matrix elements
   cout << "Enter elements of matrix 1:\n";
   for (int i = 0; i < m1.rows; i++) {
       for (int j = 0; j < m1.cols; j++) {
           cin >> m1(i, j);
       }
   }

   cout << "Enter elements of matrix 2:\n";
   for (int i = 0; i < m2.rows; i++) {
       for (int j = 0; j < m2.cols; j++) {
           cin >> m2(i, j);
       }
   }

   Matrix result = m1 * m2;

   cout << "Resultant matrix:\n";
   result.display();

   return 0;
}
