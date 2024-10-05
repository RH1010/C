//Program name:The Summation Subtraction Multiplication Devision & Modulus of two number

#include<stdio.h>
int main()
{
    int num1, num2, result;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);

    result = num1 + num2;
    printf("Summation is: %d\n",result);

    result = num1 - num2;
    printf("Subtraction is: %d\n",result);

    result = num1 * num2;
    printf("Multiplication is: %d\n",result);

    result = num1 / num2;
    printf("Devision is: %d\n",result);

    result = num1 % num2;
    printf("Modulus is: %d",result);

    return 0;
}
