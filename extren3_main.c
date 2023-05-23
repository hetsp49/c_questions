#include <stdio.h>
extern int Count;  
void Function();  
int main() {
    Function();
    Function();
    Function();
    printf("Total function calls: %d\n", Count);
    return 0;
}
