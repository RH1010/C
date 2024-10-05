//Program name:Strong number
#include<stdio.h>
int main()
{
    int num,sum=0,rem,temp,fact,i;

    printf("\t\t\t\t\tStrong number\n");

    printf("Please enter any number: ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        rem = temp % 10;

        fact=1;
        for(i=1; i<=rem; i++)
        {
            fact = fact*i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if(sum==num)
        printf("%d is a Strong number",num);
    else
        printf("%d is not a Strong number",num);

    return 0;
}
