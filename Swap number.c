//Program name: Swap number program

#include<stdio.h>
int main()
{
    int num1, num2, temp;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    temp = num1;  //temp = 10
    num1 = num2;  //num1 = 5
    num2 = temp;  //num2 = 10

    printf("First number: %d\n",num1);
    printf("Second number: %d",num2);

    return 0;
}
