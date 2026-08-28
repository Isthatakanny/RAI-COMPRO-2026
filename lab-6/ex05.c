#include <stdio.h>

struct time
{
    int minute;
    int seconds;
};


int main() {
    struct time timings[3];
    int total;

    for (int i = 0; i < 3; i++) {
        printf("Time input (m:s): ");
        scanf("%d:%d", &timings[i].minute, &timings[i].seconds);
        total += (timings[i].minute * 60) + timings[i].seconds;
    }

    printf("Total time elapsed: %d second(s)", total);
}