//Program name: Calculate the negative of positive number

#include<stdio.h>
int main()
{
    int num;

    printf("Please enter any number: ");
    scanf("%d",&num);

    if(num>0)
        printf("Number is positive");
    else if(num<0)
        printf("Number is Negative");
    else
        printf("Number is invalid");

    return 0;
}
