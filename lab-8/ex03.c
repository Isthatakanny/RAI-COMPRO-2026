#include <stdio.h>

int main() {
    int array[] = {3, 1, 2, 4 ,5 ,6};
    int *ptr = array;
    int max = *ptr;
    for (int i = 0; i < 6; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    printf("Max Value: %d\n", max);
}