#include <stdio.h>

// comment
// algo process:
// * loop for top border
// * loop for side border
// */_ loop for cross position

int main() {
    int len;

    printf("Enter box length: ");
    scanf("%d", &len);
    
    // 1st loop: i until len
    for (int i = 0; i < len; i++) {
        //2nd loop: j until len
        for (int j = 0; j < len; j++) {
            if (i == 0 || j == i || i == len-1 || j == len-1 || j == 0 || i+j == len-1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}