#include <stdio.h>

int findSmallest(int* arr, int size) {
    int smallest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return smallest;
}

int main() {
    int arr[] = {5, 3, 8, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = findSmallest(arr, size);

    printf("Smallest value in the array: %d\n", smallest);

    return 0;
}
