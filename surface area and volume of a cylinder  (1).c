/* Name:Mugo James kinyua 
Reg No:CT100/G/30663/26
Description: Hello world program 
Date:24/09/26
Version:3
*/
//variable data types

#include <stdio.h>

#define PI 3.142

int main()
{
    float radius, height, volume, surface_area;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;

    surface_area = 2 * PI * radius * radius
                 + 2 * PI * radius * height;

    printf("\nVolume of the cylinder = %.2f\n", volume);
    printf("Surface Area of the cylinder = %.2f\n", surface_area);

    return 0;
}
