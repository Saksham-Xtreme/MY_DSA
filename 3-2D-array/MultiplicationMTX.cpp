#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    // Check multiplication condition
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    int A[20][20], B[20][20], C[20][20] = {0};

    // Input Matrix A
    cout << "\nEnter elements of first matrix:\n";
    for (int i = 0; i < r1; i++) 
        for (int j = 0; j < c1; j++) 
            cin >> A[i][j];

    // Input Matrix B
    cout << "\nEnter elements of second matrix:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];

    // Multiplication
    for (int i = 0; i < r1; i++) {  
        for (int j = 0; j < c2; j++) {  
            for (int k = 0; k < r2; k++) { 
                C[i][j] += A[i][k] * B[k][j];  
            }
        }
    }

    // Output Result
    cout << "\nResultant Matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
