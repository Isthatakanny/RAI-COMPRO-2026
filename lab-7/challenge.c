#include <stdio.h>

int main() {
    int array[5] = {};
    printf("Enter 5 integers: ");
    scanf("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);
    int *ptr1 = &array[0];
    int *ptr2 = &array[1];
    int temp = *ptr1;
    printf("Unsorted: %d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4]);
    for (int i = 0; i < 5; i++) {
        if (*(ptr1 + i) > *(ptr2 + i)) {
            temp = *(ptr1 + i);
            *(ptr1 + i) = *(ptr2 + i);
            *(ptr2 + i) = temp;
        }
    }

    for (int i = 0; i < 5; i++) {
        if (*(ptr1 + i) > *(ptr2 + i)) {
            continue;
        } 
        else {
            for (int i = 0; i < 5; i++) {
                if (*(ptr1 + i) > *(ptr2 + i)) {
                    temp = *(ptr1 + i);
                    *(ptr1 + i) = *(ptr2 + i);
                    *(ptr2 + i) = temp;
        }
    }
        }
    }
    printf("Sorted: %d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4]);

}