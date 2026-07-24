#include <stdio.h>

int main() {
    float height, radius, volume;

    printf("Enter cone height: ");
    scanf("%f", &height);
    printf("Enter base radius: ");
    scanf("%f", &radius);

    volume = 3.14*radius*radius*height/3;
    printf("Cone volume = %.1f cm^3",volume);
    switch (volume > 260)
    {
    case 0:
        printf("\nThis cone is not fit for this project\n");
        break;
    
    case 1:
        printf("\nThis cone is perfect for Supun project\n");
        break;
    }
}