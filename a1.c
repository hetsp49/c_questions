#include <stdio.h>

void Sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    if (size <= 0 || size > 20) {
        printf("Invalid array size. size must less than 20\n");
        return 0;
    }
    
    int arr[size];
    
    printf("Enter %d element \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    Sort(arr, size);
    
    printf("Secound largest elelment ");
    printf("%d\n",arr[size-2]);
    printf("secound smallest element");
    printf("%d\n",arr[1]);
    printf("\n");
    
    return 0;
}

