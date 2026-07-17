#include <stdio.h>

int main() {
    int a,b,c;
    int max,min,sum;
    float avg;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    max = a;
    min = a;

    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    
    if (min > b) {
        min = b;
    }
    if (min > c) {
        min = c;
    }

    sum = a+b+c;

    avg = (a+b+c)/2;
    printf("Max: %d | Min: %d | Sum: %d | Average: %.2f", max, min, sum, avg);
}