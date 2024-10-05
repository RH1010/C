//Program name:Armstrong number
/*
 153 = 1*1*1+5*5*5+3*3*3
     = 1+125+27
     = 153
This number is Armstrong
*/

#include<stdio.h>
int main()
{
    int num,temp,r,sum=0;
    printf("\t\t\t\t\tArmstrong number\n");
    printf("Enter any number: ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        r = temp % 10;
        sum = sum + r*r*r;
        temp = temp / 10;
    }
    if(sum==num)
    {
        printf("Armstrong number");
    }
    else
        printf("Not Armstrong number");

    return 0;
}

//Program name:Armstrong number
/*
#include<stdio.h>
int main()
{
    int initialNum,finalNum,temp,r,sum=0,i;
    printf("\t\t\t\t\tArmstrong number\n");

    printf("Initial value: ");
    scanf("%d",&initialNum);

    printf("final value: ");
    scanf("%d",&finalNum);

    for(i=initialNum; i<=finalNum; i++)
    {
    temp = i;

    while(temp!=0)
    {
        r = temp % 10;
        sum = sum + r*r*r;
        temp = temp / 10;
    }
    if(sum==i)
    {
        printf("Armstrong number is: %d\n",i);
    }
        sum=0;
    }

    return 0;
}
*/
