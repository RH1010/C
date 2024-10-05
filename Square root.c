// Program name: Square root
#include<stdio.h>
int main()
{
    int x;

    printf("Please enter any number: ");
    scanf("%d",&x);

    double result = sqrt(x);

    printf("Root number is: %.2lf",result);

    return 0;
}
