#include <stdio.h>

int stringLength(const char* str) {
    int length = 0;

    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    int length = stringLength(str);

    printf("Length of the string: %d\n", length);

    return 0;
}
