#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char input[256];
    int uppercase = 0, lowercase = 0, digits = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    printf("Input: \"");
    for (int i = 0; input[i] != '\0' && input[i] != '\n'; i++)
    {
        putchar(input[i]);

        if (isupper(input[i]))
            uppercase++;
        else if (islower(input[i]))
            lowercase++;
        else if (isdigit(input[i]))
            digits++;
    }
    printf("\"\n");

    printf("Output:\n");
    printf("Uppercase letters: %d\n", uppercase);
    printf("Lowercase letters: %d\n", lowercase);
    printf("Digits: %d\n", digits);

    return 0;
}