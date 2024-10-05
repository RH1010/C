//Program name: Sum of digits
/*
    123 = 1+2+3
        = 6
This is a sum of digits
*/
#include<stdio.h>
int main()
{
    int num,temp,r,sum=0;

    printf("Enter any number: ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        r = temp % 10;
        sum = sum + r;
        temp = temp / 10;
    }
    printf("Sum of digits: %d",sum);

    return 0;
}
