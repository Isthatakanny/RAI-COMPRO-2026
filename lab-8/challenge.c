#include <stdio.h>

#define MAX 100

char names[MAX][50];
int grades[MAX];
int n;
int highIndex, lowIndex;

double calculate_average(void)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += grades[i];

    return (double)sum / n;
}

void find_highest_lowest(void)
{
    highIndex = 0;
    lowIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (grades[i] > grades[highIndex])
            highIndex = i;
        if (grades[i] < grades[lowIndex])
            lowIndex = i;
    }
}

int main(void)
{
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter grade of %s: ", names[i]);
        scanf("%d", &grades[i]);
    }

    double average = calculate_average();
    find_highest_lowest();

    printf("--- Results ---\n");
    printf("Average grade: %.2f\n", average);
    printf("Highest grade: %d (%s)\n", grades[highIndex], names[highIndex]);
    printf("Lowest grade: %d (%s)\n", grades[lowIndex], names[lowIndex]);

    printf("Students who passed:\n");
    for (int i = 0; i < n; i++)
    {
        if (grades[i] >= 60)
        {
            char letter;
            if (grades[i] >= 80)
                letter = 'A';
            else if (grades[i] >= 70)
                letter = 'B';
            else
                letter = 'C';

            printf("%s - Grade %c\n", names[i], letter);
        }
    }

    return 0;
}