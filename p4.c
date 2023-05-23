#include <stdio.h>

int countCharacters(char* str, char ch) {
    int count = 0;

    while (*str != '\0') {
        if (*str == ch) {
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter the character to count: ");
    scanf(" %c", &ch);

    int count = countCharacters(str, ch);

    printf("Number of occurrences of '%c' in the string: %d\n", ch, count);

    return 0;
}
