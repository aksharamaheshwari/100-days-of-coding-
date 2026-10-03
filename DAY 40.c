#include <stdio.h>

// Function to print diagonal traversal
void printDiagonalOrder(int m, int n, int matrix[m][n]) {
    int totalDiagonals = m + n - 1;
    
    printf("Diagonal Traversal Output: ");
    for (int d = 0; d < totalDiagonals; d++) {
        if (d % 2 == 0) {
            // Moving up and right
            int r = (d < m) ? d : m - 1;
            int c = d - r;
            while (r >= 0 && c < n) {
                printf("%d ", matrix[r][c]);
                r--;
                c++;
            }
        } else {
            // Moving down and left
            int c = (d < n) ? d : n - 1;
            int r = d - c;
            while (r < m && c >= 0) {
                printf("%d ", matrix[r][c]);
                r++;
                c--;
            }
        }
    }
    printf("\n");
}

int main() {
    // --- Sample Test Case 1 ---
    printf("--- Test Case 1 ---\n");
    int mat1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printDiagonalOrder(3, 3, mat1); 
    // Expected Output: 1 2 4 7 5 3 6 8 9

    // --- Sample Test Case 2 ---
    printf("\n--- Test Case 2 ---\n");
    int mat2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    printDiagonalOrder(2, 3, mat2);
    // Expected Output: 1 2 4 5 3 6

    return 0;
}


#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int rA, int cA, int matrixA[rA][cA], 
                      int rB, int cB, int matrixB[rB][cB], 
                      int result[rA][cB]) {
    
    // Safety verification check
    if (cA != rB) {
        printf("Error: Matrices cannot be multiplied!\n");
        return;
    }

    // Initialize the result matrix elements to 0
    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++) {
            result[i][j] = 0;
        }
    }

    // Compute the matrix multiplication
    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++) {
            for (int k = 0; k < cA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

// Helper function to print a matrix layout cleanly
void printMatrix(int r, int c, int matrix[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // --- Sample Test Case 1 ---
    printf("--- Test Case 1 ---\n");
    int A1[2][2] = {{1, 2}, {3, 4}};
    int B1[2][2] = {{5, 6}, {7, 8}};
    int res1[2][2];

    multiplyMatrices(2, 2, A1, 2, 2, B1, res1);
    printf("Resulting Matrix:\n");
    printMatrix(2, 2, res1);
    // Expected Output:
    // 19 22 
    // 43 50 

    // --- Sample Test Case 2 ---
    printf("\n--- Test Case 2 (Different Dimensions) ---\n");
    int A2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int res2[2][2];

    multiplyMatrices(2, 3, A2, 3, 2, B2, res2);
    printf("Resulting Matrix:\n");
    printMatrix(2, 2, res2);
    // Expected Output:
    // 58 64 
    // 139 154 

    return 0;
}
