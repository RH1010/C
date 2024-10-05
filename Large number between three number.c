//Program name:Identifying a Large number between three number

#include<stdio.h>
int main()
{
    int num1, num2, num3;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter third number: ");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3)
        printf("Largest number is %d",num1);
    else if(num2>num1 && num2>num3)
        printf("Largest number is %d",num2);
    else if(num3>num1 && num3>num2)
        printf("Largest number is %d",num3);
    else
        printf("Number is equal %d");

    return 0;
}
