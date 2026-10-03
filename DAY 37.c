#include <stdio.h>

void calculateRowSums(int matrix[3][3], int rows, int cols, int result[]) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        result[i] = sum;
    }
}

int main() {
    int rows = 3;
    int cols = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int result[3];

    calculateRowSums(matrix, rows, cols, result);

    printf("Row sums array: ");
    for (int i = 0; i < rows; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

void transpose(int matrix[3][2], int rows, int cols, int transposed[2][3]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int rows = 3;
    int cols = 2;
    int matrix[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    int transposed[2][3];

    transpose(matrix, rows, cols, transposed);

    printf("Transposed Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
