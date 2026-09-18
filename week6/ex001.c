#include <stdio.h>

int main() {
    int arr[3][3], j;

    for (int i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter number [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        j = 0;
    }
    printf("\nMatrix:");
    printf("\n%d %d %d", arr[0][0], arr[0][1], arr[0][2]);
    printf("\n%d %d %d", arr[1][0], arr[1][1], arr[1][2]);
    printf("\n%d %d %d\n", arr[2][0], arr[2][1], arr[2][2]);
    
}