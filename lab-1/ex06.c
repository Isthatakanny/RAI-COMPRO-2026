#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%s %d\n","Decimal: ", a);
    printf("%s %o\n","Octal: ", a);
    printf("%s %x\n","Hexadecimal: ", a);
}