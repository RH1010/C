//Program name: Conditional operator use large number
#include<stdio.h>
int main()
{
    int num1, num2, large;

    printf("Enter any two number: ");
    scanf("%d%d",&num1,&num2);

    large = (num1>num2) ? num1 : num2;
    printf("Large number is: %d\n",large);

    return 0;
}
