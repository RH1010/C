//Program name: Print 1 to 50 number but only print out even numbers

#include<stdio.h>
int main()
{
    int i;
    printf("Even numbers between 1 to 50 (inclusive): \n");

    for (i = 1; i <= 50; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }
        return 0;

    }
