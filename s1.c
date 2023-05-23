
#include <stdio.h>

void reverseString(char* str) {
    int length = 0;
    int i, j;
    char temp;

    while (str[length] != '\0') {
        length++;
    }
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
