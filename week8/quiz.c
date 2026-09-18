#include <stdio.h>

int main() {
    int a[3][3] = {1,0,-1,-1,2,3,2,4,5};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i != j) {
                a[i][j] = 0;
                
            }
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}