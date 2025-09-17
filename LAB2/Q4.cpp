//task no 4 by pari batra 24k3115
#include <iostream>
using namespace std;

// Function to calculate sum of main diagonal elements
int sumOfMainDiagonal(int **matrix, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

// Function to calculate sum of secondary diagonal elements
int sumOfSecondaryDiagonal(int **matrix, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][n - i - 1];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the size of matrix (nxn) : ";
    cin >> n;

    // Memory allocation
    int **matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }

    cout << "Enter the values of (" << n << "x" << n << ") matrix : " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int minSum = sumOfMainDiagonal(matrix, n);
    int secSum = sumOfSecondaryDiagonal(matrix, n);

    cout << "Sum of main diagonal = " << minSum << endl;
    cout << "Sum of secondary diagonal = " << secSum << endl;

    // Free memory
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}
