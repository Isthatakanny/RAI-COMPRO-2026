#include <stdio.h>

int main()  {
    int num;

    do {
        printf("Enter the number: ");
        scanf("%d", &num);
        if (num != 0) {
            if (num % 2 == 0) {
            printf("%d is even\n", num);
            }
            else {
                printf("%d is odd\n", num);
            }
        }
        else {
            printf("Exiting Program... Bye\n");
        }
    } while (num != 0);
}