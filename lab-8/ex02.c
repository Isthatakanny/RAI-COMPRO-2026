#include <stdio.h>
#include <math.h>

int start, end, total_no; 

int check_armstrong(int num) {
    int digits = 0, sum = 0, temp = num;
    
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    int single_digits[digits];
    temp = num;
    for (int i = digits - 1; i >= 0; i--) {
        single_digits[i] = temp % 10;
        temp /= 10; 
    }
    
    for (int i = 0; i < digits; i++) {
        sum += round(pow(single_digits[i], digits)); 
    }
    
    if (sum == num) {
        return 1;
    }
    return 0; 
}

int main() {
    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);
    
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }
    
    printf("The Armstrong numbers within the interval [%d, %d] are: \n", start, end);
    
    for (int i = start; i <= end; i++) {
        if (check_armstrong(i)) {
            printf("%d ", i);
            total_no++;
        }
    }
    printf("\nTotal Armstrong numbers found: %d\n", total_no);
    
    return 0;
}