#include <stdio.h>

int max(int array[]) {
        int max = array[0];
        for (int i = 0; i < 8; i++) {
            if (max < array[i]) {
                max = array[i];
            }
        }
        return max;
    }

int min(int array[]) {
    int min = array[0];
    for (int i = 0; i < 8; i++) {
        if (min > array[i]) {
            min = array[i];
        }
    }
    return min;
}

int main() {
    int arr[8], small, large;

    for (int i = 0; i < 8; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    large = max(arr);
    small = min(arr);

    printf("Smallest number: %d", small);
    printf("\nLargest number: %d", large);
}