#include <stdio.h>

int main() {
    int num, temp;

    printf("Enter number of elements: ");
    scanf("%d", &num);
    int values[num];
    printf("Enter %d integers: ", num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &values[i]);
    }

    for (int i = 0; i < num; i++) {
        int seen = 0;
        for (int j = 0; j < i; j++) {
            if (values[i] == values[j]) {
                seen = 1;
            }
        }

        if (seen) {
            continue;
        }

        int count = 0;
        for (int k = 0; k < num; k++) {
            if (values[i] == values[k]) {
                count++;
            }
        }
        printf("Element %d occurs %d times\n", values[i], count);
    }

}