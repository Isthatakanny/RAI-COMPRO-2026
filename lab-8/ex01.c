#include <stdio.h>
#include <math.h>
#define PI 3.14

float calculate_base_area(float radius) {
    return(PI * pow(radius, 2));
}

float calculate_surface_area(float radius, float height) {
    return(2 * PI * radius * (radius + height));
}

float calculate_volume(float radius, float height) {
    return(PI * pow(radius, 2) * height);
}

int main() {
    float radius, height;
    do {
        printf("Enter radius and height in cm: ");
        scanf("%f %f", &radius, &height);
        if (radius < 0 || height < 0) {
            printf("Error: Radius and height must be greater than 0.\n");
        }
    } while (radius < 0 || height < 0);
    printf("Base Area: %.2f\n", calculate_base_area(radius));
    printf("Surface Area: %.2f\n", calculate_surface_area(radius, height));
    printf("Volume: %.2f\n", calculate_volume(radius, height));

}