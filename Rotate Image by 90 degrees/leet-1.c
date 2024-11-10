#include <stdio.h>

void rotate(int n, int M[n][n]);
void printMatrix(int n, int M[n][n]);

int main() {
    int n = 3; // Example for a 3x3 matrix
    int M[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    printMatrix(n, M);    // Calling Function to print original matrix

    rotate(n, M);    // Calling Function to rotate the matrix

    printf("\nRotated Matrix:\n");
    printMatrix(n, M);    // Calling Function to print the rotated matrix

    return 0;
}

// Functions
void rotate(int n, int M[n][n]) {
    int depth = n / 2;
    for (int i = 0; i < depth; i++) {
        int len = n - 2 * i - 1;
        int opp = n - 1 - i;
        for (int j = 0; j < len; j++) {
            int temp = M[i][i+j];
            M[i][i+j] = M[opp-j][i];
            M[opp-j][i] = M[opp][opp-j];
            M[opp][opp-j] = M[i+j][opp];
            M[i+j][opp] = temp;
        }
    }
}

void printMatrix(int n, int M[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}
