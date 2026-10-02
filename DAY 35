#include <stdio.h>

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        return -1;
    }

    int first = -1;
    int second = -1;

    for (int i = 0; i < size; i++) {
        if (first == -1 || arr[i] > arr[first]) {
            second = first;
            first = i;
        } else if (arr[i] < arr[first]) {
            if (second == -1 || arr[i] > arr[second]) {
                second = i;
            }
        }
    }

    return (second == -1) ? -1 : arr[second];
}

int main() {
    int arr1[] = {12, 35, 1, 10, 34, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Test Case 1 - Second Largest: %d\n", findSecondLargest(arr1, n1));

    int arr2[] = {10, 10, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Test Case 2 - Second Largest: %d\n", findSecondLargest(arr2, n2));

    return 0;
}


#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateRight(int arr[], int size, int k) {
    if (size <= 1) return;
    
    k = k % size; 
    if (k == 0) return;

    reverse(arr, 0, size - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, size - 1);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 3;
    
    printArray(arr1, n1);
    rotateRight(arr1, n1, k1);
    printArray(arr1, n1);

    return 0;
}
