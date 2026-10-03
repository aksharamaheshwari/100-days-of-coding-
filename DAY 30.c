Q59: Count even and odd numbers in an array
code:
#include <stdio.h>

void countEvenOdd(int arr[], int size) {
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Even elements: %d\n", evenCount);
    printf("Odd elements: %d\n", oddCount);
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    countEvenOdd(arr, size);
    return 0;
}

Q60: Count positive, negative, and zero elements in an array
code:
#include <stdio.h>

void countElements(int arr[], int size) {
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Positive elements: %d\n", positiveCount);
    printf("Negative elements: %d\n", negativeCount);
    printf("Zero elements: %d\n", zeroCount);
}

int main() {
    int arr[] = {-4, 3, -9, 0, 4, 1, -2, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    countElements(arr, size);
    return 0;
}
