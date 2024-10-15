#include <iostream>
using namespace std;

#define MAX 10

// Addition
void add(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            result[i][j] = A[i][j] + B[i][j];
}

// Subtraction
void subtract(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            result[i][j] = A[i][j] - B[i][j];
}

// Multiplication
void multiply(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rA, int cA, int cB) {
    for (int i = 0; i < rA; i++)
        for (int j = 0; j < cB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cA; k++)
                result[i][j] += A[i][k] * B[k][j];
        }
}

// Transpose
void transpose(int A[MAX][MAX], int result[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            result[j][i] = A[i][j];
}

// Display matrix
void display(int matrix[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX], rA, cA, rB, cB, choice;

    cout << "Enter rows and columns of matrix A: "; cin >> rA >> cA;
    cout << "Enter elements of matrix A:\n";
    for (int i = 0; i < rA; i++) for (int j = 0; j < cA; j++) cin >> A[i][j];

    cout << "Enter rows and columns of matrix B: "; cin >> rB >> cB;
    cout << "Enter elements of matrix B:\n";
    for (int i = 0; i < rB; i++) for (int j = 0; j < cB; j++) cin >> B[i][j];

    cout << "Choose operation: 1.Addition 2.Subtraction 3.Multiplication 4.Transpose of A\n"; cin >> choice;

    switch (choice) {
        case 1:
            if (rA == rB && cA == cB) { add(A, B, result, rA, cA); display(result, rA, cA); }
            else cout << "Invalid dimensions for addition.\n";
            break;
        case 2:
            if (rA == rB && cA == cB) { subtract(A, B, result, rA, cA); display(result, rA, cA); }
            else cout << "Invalid dimensions for subtraction.\n";
            break;
        case 3:
            if (cA == rB) { multiply(A, B, result, rA, cA, cB); display(result, rA, cB); }
            else cout << "Invalid dimensions for multiplication.\n";
            break;
        case 4:
            transpose(A, result, rA, cA); display(result, cA, rA);
            break;
        default:
            cout << "Invalid choice!\n";

    }
     cout<<"AMAN VERMA BCA III-B " <<endl;
    cout<<"Enrollment-A45304823055";

    return 0;
}
