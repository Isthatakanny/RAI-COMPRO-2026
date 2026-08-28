#include <stdio.h>

struct vector
{
    float x;
    float y;
};


int main() {
    struct vector vec1, vec2, resultant;

    printf("u_x: ");
    scanf(" %f", &vec1.x);
    printf("u_y: ");
    scanf(" %f", &vec1.y);
    printf("v_x: ");
    scanf(" %f", &vec2.x);
    printf("v_y: ");
    scanf(" %f", &vec2.y);

    resultant.x = vec1.x + vec2.x;
    resultant.y = vec1.y + vec2.y;

    printf("Resultant vector is equavalance to %.1fi + %.1fj",
    resultant.x, resultant.y);
}