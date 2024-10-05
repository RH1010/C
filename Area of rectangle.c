
//Program name: Area of rectangle program

#include<stdio.h>
int main()
{
    float length, width, area;

    printf("Enter the length value: ");
    scanf("%f",&length);
    printf("Enter the widhh value: ");
    scanf("%f",&width);

    area = length*width;
    printf("Area of rectangle: %.2f",area);

    return 0;
}
