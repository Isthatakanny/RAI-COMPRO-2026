#include <stdio.h>



int main() {
    int a;
    float b;
    char c[1];

    printf("Please enter an integer value: ");
    scanf("%d", &a);
    printf("You entered %d\n", a);

    printf("Please enter an float value: ");
    scanf("%f", &b);
    printf("You entered %.1f\n", b);

    printf("Please enter a character: ");
    scanf(" %c", &c);
    printf("You entered %c\n", c[0]);
 
    return 0;
}