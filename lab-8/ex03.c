#include <stdio.h>
#include <math.h>

int start, end;

int calculate(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += pow(i, 3);
    }
    return sum;
}

int main() {
    printf("Enter the two integers (start end): ");
    scanf("%d %d", &start, &end);
    printf("Sum of cubes from %d to %d is %d", start, end, calculate(start, end));
}