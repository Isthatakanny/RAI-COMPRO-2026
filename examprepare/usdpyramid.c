#include <stdio.h>

int main() {
    int size, needspace = 0;

    printf("Enter upside-down pyramid's size: ");
    scanf("%d", &size);

    for (int i = 0; i < (size+1)/2; i++) {
        needspace = 1;
        if (needspace) {
            for (int j = 0; j < i; j++) {
                printf(" ");
                if (j == i) {
                    needspace = 0;
                }
            }
        }
        for (int k = 0; k < size-2*i; k++) {
            printf("*");
            if (k == size-2*i) {
                needspace = 1;
            }
        }
        printf("\n");
    }
}