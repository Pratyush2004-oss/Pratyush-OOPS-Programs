#include <iostream>
using namespace std;

// Matrix class with static allocation
class Matrix {
  private:
    // Static array to store matrix elements
    static const int MAX = 10;
    int mat[MAX][MAX];
    int rows, cols; // Number of rows and columns

  public:
    // Constructor with default arguments
    Matrix(int r = 0, int c = 0) {
      rows = r;
      cols = c;
      // Initialize matrix elements to zero
      for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
          mat[i][j] = 0;
        }
      }
    }

    // Method to input matrix elements
    void input() {
      cout << "Enter " << rows << " x " << cols << " matrix elements:\n";
      for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
          cin >> mat[i][j];
        }
      }
    }

    // Method to output matrix elements
    void output() {
      cout << "The matrix is:\n";
      for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
          cout << mat[i][j] << " ";
        }
        cout << "\n";
      }
    }

    // Method to get the number of rows
    int getRows() {
      return rows;
    }

    // Method to get the number of columns
    int getCols() {
      return cols;
    }

    // Method to get a matrix element at a given position
    int getElement(int i, int j) {
      return mat[i][j];
    }

    // Friend function to do matrix-vector multiplication
    friend Vector multiply(Matrix, Vector);
};

// Vector class with static allocation
class Vector {
  private:
    // Static array to store vector elements
    static const int MAX = 10;
    int vec[MAX];
    int size; // Number of elements

  public:
    // Constructor with default argument
    Vector(int s = 0) {
      size = s;
      // Initialize vector elements to zero
      for(int i = 0; i < size; i++) {
        vec[i] = 0;
      }
    }

    // Method to input vector elements
    void input() {
      cout << "Enter " << size << " vector elements:\n";
      for(int i = 0; i < size; i++) {
        cin >> vec[i];
      }
    }

    // Method to output vector elements
    void output() {
      cout << "The vector is:\n";
      for(int i = 0; i < size; i++) {
        cout << vec[i] << "\n";
      }
    }

    // Method to get the size of the vector
    int getSize() {
      return size;
    }

    // Method to get a vector element at a given position
    int getElement(int i) {
      return vec[i];
    }

    // Friend function to do matrix-vector multiplication
    friend Vector multiply(Matrix, Vector);
};

// Friend function to do matrix-vector multiplication
Vector multiply(Matrix m, Vector v) {
  // Check if the number of columns of the matrix is equal to the size of the vector
  if(m.getCols() != v.getSize()) {
    cout << "Matrix-vector multiplication is not possible.\n";
    return Vector(); // Return an empty vector
  }
  else {
    // Create a new vector with the same size as the number of rows of the matrix
    Vector result(m.getRows());
    // Loop through the rows of the matrix
    for(int i = 0; i < m.getRows(); i++) {
      // Initialize the result vector element to zero
      result.vec[i] = 0;
      // Loop through the columns of the matrix
      for(int j = 0; j < m.getCols(); j++) {
        // Multiply the matrix element with the corresponding vector element and add to the result
        result.vec[i] += m.getElement(i, j) * v.getElement(j);
      }
    }
    // Return the result vector
    return result;
  }
}

int main()
{
  // Create a matrix object with 3 rows and 2 columns
  Matrix m(3, 2);
  // Input the matrix elements
  m.input();
  // Output the matrix elements
  m.output();

  // Create a vector object with 2 elements
  Vector v(2);
  // Input the vector elements
  v.input();
  // Output the vector elements
  v.output();

  // Call the friend function to multiply the matrix and the vector
  Vector r = multiply(m, v);
  // Output the result vector
  r.output();

  return 0;
}
