#include <stdio.h>

int main() {
    float radius, height, volume, surfaceArea;
    float pi = 3.142;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = pi * radius * radius * height;
    surfaceArea = (2 * pi * radius * radius) + (2 * pi * radius * height);

    printf("\nVolume of the cylinder = %.2f\n", volume);
    printf("Surface area of the cylinder = %.2f\n", surfaceArea);

    return 0;
}