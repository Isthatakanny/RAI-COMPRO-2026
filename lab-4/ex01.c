#include <stdio.h>
#include <math.h>

int sumArray(int array[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += array[i];
    }
    return total;
}


int main() {
    int num = 0, numArray[10], total = 0, length = 0;
    float average;

    for (int i = 0; i<10; i++) {
        printf("Enter the number: ");
        scanf("%d", &num);
        numArray[i] = num;
    }
    length = sizeof(numArray) / sizeof(numArray[0]);
    total = sumArray(numArray,length);
    average = (float)total/10;
    printf("Total sum is %d \n", total);
    printf("Average is %.2f", average);

}