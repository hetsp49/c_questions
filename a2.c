#include <stdio.h>

void rev_arr(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d element :\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enterd  array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    rev_arr(arr, size);
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

