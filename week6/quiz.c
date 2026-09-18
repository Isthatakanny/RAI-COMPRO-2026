#include <stdio.h>

int main() {
    int size;

    printf("Please enter number: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        if (i == 0 || i == size-1) {
            for (int i = 0; i < size; i++) {
                printf("*");
            }
        }
        else {
            for (int j = 0; j < size; j++) {
                if (j == 0 || j == size-1) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }


}