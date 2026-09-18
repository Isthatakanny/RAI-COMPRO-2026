#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter Number1: ");
    scanf("%f", &num1);
    printf("Enter Number2: ");
    scanf("%f", &num2);
    if (num2 != 0)
        printf("%.2f / %.2f = %.2f", num1, num2, num1/num2);
    else 
        printf("Error divided by zero\n");
}