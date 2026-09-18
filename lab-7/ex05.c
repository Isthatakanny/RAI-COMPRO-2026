#include <stdio.h>

int main() {
    int array[] = {3, 1 ,2 ,4 ,5, 6};
    int *ptr = array;
    int sum;

    for (int i = 0; i < 6; i++) {
        sum += *(ptr + i);
    }
    printf("The sum of array is: %d", sum);
}