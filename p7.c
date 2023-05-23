#include <stdio.h>

#define ROWS 3
#define COLS 5

int main() {
    char arr[ROWS][COLS] = {
        {'A', 'B', 'C', 'D', 'E'},
        {'F', 'G', 'H', 'I', 'J'},
        {'K', 'L', 'M', 'N', 'O'}
    };

    printf("Two-dimensional array:\n");

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
