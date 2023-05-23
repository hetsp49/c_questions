#include <stdio.h>
extern int Count;
void Function() {
    Count++;
    printf("Function called %d times.\n", Count);
}
