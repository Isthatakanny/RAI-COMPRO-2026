#include <stdio.h>

int main() {
    int a = 0;
    int b = 5;
    printf("Before reverse: a = %d, b = %d", a, b);
    int *ptra = &a;
    int *ptrb = &b;
    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
    printf("After reverse: a = %d, b = %d", *ptra, *ptrb);
}