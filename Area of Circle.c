//Program name: Area of Circle program

#include<stdio.h>
#define PI 3.14
int main()
{
    float radius, area;

    printf("Enter the radius value: ");
    scanf("%f",&radius);

    area = PI*radius*radius;
    printf("Area of Circle: %.2f",area);

    return 0;
}

/*
#include<stdio.h>
#include<math.h>
int main()
{
    float radius, area;

    printf("Enter the radius value: ");
    scanf("%f",&radius);

    area = M_PI*radius*radius;
    printf("Area of Circle: %.2f",area);

    return 0;
}
*/
