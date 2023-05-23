#include <stdio.h>
#include <string.h>
#include <ctype.h>
void removeNum(char* str) {
    int len = strlen(str);
    char result[len + 1];  
    int j = 0;  

    for (int i = 0; i < len; i++) {
        if (!isdigit(str[i])) {
            result[j] = str[i];
            j++;
        }
    }
    strcpy(str, result);  
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    removeNum(str);
    printf("String without number: %s\n", str);
    return 0;
}
