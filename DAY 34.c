#include <stdio.h>

void insertElement(int arr[], int n, int element, int pos) {
    int idx = pos - 1;
    for (int i = n - 1; i > idx; i--) {
        arr[i] = arr[i - 1];
    }
    arr[idx] = element;
}

int main() {
    int arr[6] = {10, 20, 30, 40, 50}; 
    insertElement(arr, 6, 25, 3);

    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}


#include <stdio.h>

int deleteElement(int arr[], int n, int pos) {
    int idx = pos - 1;
    for (int i = idx; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}

int main() {
    int arr[] = {10, 20, 25, 30, 40};
    int newSize = deleteElement(arr, 5, 3);

    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
