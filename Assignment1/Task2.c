#include <stdio.h>

int main(void)
{
// Input radius
    int radius;
    const double PI = 3.14159;
    do
    {
        printf("Enter radius: ");
        scanf("%d", &radius);

        if(radius < 0)
        {
            printf("Invalid. Enter a valid radius!\n");
        }
    }
    while(radius < 0);

// Calculation of the surface area of the sphere given the radius

double SurfaceArea = 4 * PI * radius * radius;
printf("Surface area of the sphere is: %.5f\n", SurfaceArea);
return 0;
}
