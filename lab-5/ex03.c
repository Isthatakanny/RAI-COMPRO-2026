#include <stdio.h>

int main() {
    int marks[5];
    int total, max;

    for (int i = 0; i < 5; i++) {
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    printf("Total Marks: %d", total);
    max = marks[0];
    for (int j = 0; j < 5; j++) {
        if (max < marks[j]) {
           max = marks[j];
        }
    }
    printf("\nHighest Marks: %d", max);

}