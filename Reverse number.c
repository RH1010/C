//Program name: Reverse number

#include<stdio.h>
int main()
{
    int num, temp, r, sum=0;

    printf("Please enter any positive number: ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        r = temp % 10;
        sum = sum*10+r;
        temp = temp /= 10;
    }
        printf("Reverse of number: %d\n",sum);

        return 0;
}
