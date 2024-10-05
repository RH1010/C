//Program name: Area of ​​triangle

#include<stdio.h>
int main()
{
    float base, height, area;

    printf("Enter base number: ");
    scanf("%f",&base);
    printf("Enter height number: ");
    scanf("%f",&height);

    area = 0.5*base*height;
    printf("Area: %.2f",area);

    return 0;
}
