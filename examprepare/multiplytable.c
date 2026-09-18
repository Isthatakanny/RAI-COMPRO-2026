#include <stdio.h>

int main() {
    for (int i = 2; i <= 12; i++) {
        printf("Multiplication table #%d\n", i-1);
        for (int j = 1; j <= 12; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
    }
}