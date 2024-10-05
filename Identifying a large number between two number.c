//Program name:Identifying a large number between two number

#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    if(num1>num2)
        printf("Largest number is %d ",num1);
    else if(num1<num2)
        printf("Largest number is %d ",num2);
    else
        printf("Number is equal %d ",num1);

    return 0;
}
