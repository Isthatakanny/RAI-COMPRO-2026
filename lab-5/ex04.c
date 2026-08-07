#include <stdio.h>

int main() {
    int arr[10];
    int odd, even;

    for (int i = 0; i < 10; i++) {
        printf("Enter value %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < 10; j++) {
        if ((arr[j] % 2) == 0) {
            even += 1;
        }
        else {
            odd += 1;
        }
    }
    printf("Even numbers: %d", even);
    printf("\nOdd numbers: %d", odd);
}