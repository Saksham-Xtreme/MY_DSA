#include <iostream>
using namespace std;

int main() {

    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[20][20];
    cout << "Enter the matrix elements:\n";

    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Count non-zero values
    int nonZero = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0)
                nonZero++;
        }
    }

    // Sparse matrix array: (nonZero + 1) rows and 3 columns
    int sparse[20][3];
    
    // First row stores summary
    sparse[0][0] = rows;
    sparse[0][1] = cols;
    sparse[0][2] = nonZero;

    int k = 1; // Index for sparse matrix
    
    // Fill sparse representation
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {   
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    // Display original matrix
    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Display sparse matrix
    cout << "\nSparse Matrix (Triplet Representation):\n";
    for (int i = 0; i < nonZero + 1; i++) {
        cout << sparse[i][0] << " " << sparse[i][1] << " " << sparse[i][2] << endl;
    }

    return 0;
}
