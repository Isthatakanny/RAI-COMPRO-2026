#include <stdio.h>

int main() {
    int num, total = 1;

    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        total *= i;
    }
    printf("Factorial of %d is %d", num, total);
}