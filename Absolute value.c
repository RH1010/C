//Program name:Absolute value
#include<stdio.h>
int main()
{
    int result;
    printf("Please enter any integer value: ");
    scanf("%d",&result);

    result = abs(result);

    printf("Absolute value is: %d",result);
}
