#include <stdio.h>

int main() {
    int a, casenum, ans;

    printf("Enter a number: ");
    scanf("%d", &a);

    switch (a > 0 && a < 100)
    {
    case 0:
        printf("%d is out of range", a);
        break;
    case 1:
        ans = a % 2;
        switch (ans)
        {
        case 0:
            printf("%d is even", a);
            break;
        case 1:
            printf("%d is odd", a);
            break;
        }
    }
}