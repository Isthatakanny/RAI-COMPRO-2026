#include <stdio.h>

int main() {
    int original[] = {1, 2, 3, 4, 5, 6, 7 ,8 ,9};
    int reverse[9];
    int temp;

    for (int i = 0; i < 9; i++) {
        reverse[i] = original[8-i];
    }
    printf("Reversed Array: ");
    for (int j = 0; j < 9; j++) {
        printf("%d ", reverse[j]);
    }
    
}