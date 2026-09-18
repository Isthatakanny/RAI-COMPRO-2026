#include <stdio.h>

int main() {
    int array[] = {3, 1, 2, 4 ,5 ,6};
    int *ptr = array;
    for (int i = 0; i < 6; i++) {
        printf("%d", *(ptr + i));
    }
}