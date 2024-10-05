//Program name: Power calculation
#include<stdio.h>
int main()
{
    int x, y;

    printf("Enter x number: ");
    scanf("%d",&x);
    printf("Enter x number is power of: ");
    scanf("%d",&y);

    double result = pow(x,y);
    printf("%.2lf",result);

    return 0;
}
