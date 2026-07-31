#include <stdio.h>

int sumArray(int array[], int size) {
    int total = 0, i = 0;
    while (i < size) {
        total += array[i];  
        i += 1; 
    }
    return total;
}

int main() {
    int total = 0, i = 0, numArray[10], length = 0;
    
    while (i < 10) {
        printf("Enter the number: ");
        scanf("%d", &numArray[i]);
        i += 1;
    }

    length = sizeof(numArray)/sizeof(numArray[0]);
    total = sumArray(numArray, length);
    printf("Total sum is %d", total);
}