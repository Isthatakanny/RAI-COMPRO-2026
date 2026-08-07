#include <stdio.h>

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter the value %d here: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Values in array are: ");
    for (int j = 0; j < 10; j++) {
        printf("%d", arr[j]);
        if (j < 9) {
            printf(", ");
        }
    }
}