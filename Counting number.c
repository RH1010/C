//Program name:Counting number
/*
    1236 = 1236
         = 1+1+1+1
         = 4
Total digits of 4
*/
#include<stdio.h>
int main()
{
    int num,count=0;

    printf("Please enter any integer number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        num = num/10;
        ++count;
    }
    printf("Total number of digits: %d\n",count);

    return 0;
}
