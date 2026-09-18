#include <stdio.h>

#define MAX 100

int arr[MAX];
int n;
int sumPos = 0, sumNeg = 0;
int countPos = 0, countNeg = 0;

void calculate_sums(void)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sumPos += arr[i];
            countPos++;
        }
        else if (arr[i] < 0)
        {
            sumNeg += arr[i];
            countNeg++;
        }
    }
}

int main(void)
{
    printf("N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Input: ");
        scanf("%d", &arr[i]);
    }

    calculate_sums();

    double avgPos = 0, avgNeg = 0;
    if (countPos > 0)
        avgPos = (double)sumPos / countPos;
    if (countNeg > 0)
        avgNeg = (double)sumNeg / countNeg;

    printf("Output:\n");
    printf("Positive numbers -> Sum: %d, Average: %.2f\n", sumPos, avgPos);
    printf("Negative numbers -> Sum: %d, Average: %.2f\n", sumNeg, avgNeg);

    return 0;
}