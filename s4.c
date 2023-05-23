#include <stdio.h>
void printString(char* str) {
    printf("%s\n", str);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printString(str);
    return 0;
}
