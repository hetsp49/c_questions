#include <stdio.h>

void removedup(int arr[], int size) {
    int u_S = 0;
    
    for (int i = 0; i < size; i++) {
        int j;
        for (j = 0; j < k; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        
        if (j == u_S) {
            arr[u_S] = arr[i];
            u_S++;
        }
    }
    
    printf("Array without duplicates  ");
    for (int i = 0; i < u_S; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}                                                                                                                                                                 
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Entered array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    removedup(arr, size);
    
    return 0;
}

