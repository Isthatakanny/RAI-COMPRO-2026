#include <stdio.h>

int main() {
    char name[100], grade[100];
    float calcscore, physscore, sciscore, avg;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your Calculus score: ");
    scanf("%f", &calcscore);
    printf("Enter your Physics score: ");
    scanf("%f", &physscore);
    printf("Enter your Science score: ");
    scanf("%f", &sciscore);

    avg = (calcscore + physscore + sciscore)/3;
    if (avg >= 80)
        printf("%s, your average is %.2f. You got grade A\n", name, avg);
    else if (avg >= 70 && avg <= 80)
        printf("%s, your average is %.2f. You got grade B\n", name, avg);
    else if (avg >= 60 && avg <= 70)
        printf("%s, your average is %.2f. You got grade C\n", name, avg);
    else if (avg >= 50 && avg <= 60)
        printf("%s, your average is %.2f. You got grade D\n", name, avg);
    else if (avg < 50)
        printf("%s, your average is %.2f. You got grade F\n", name, avg);
    
}