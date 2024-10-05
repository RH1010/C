//Program name: Print 1 to 50 number but only print out odd numbers

#include<stdio.h>
int main()
{
    int i;
    printf("Odd numbers between 1 to 50 (inclusive): \n");

    for (i = 1; i <= 50; i=i+2)
    {
        printf("%d\n", i);
    }
        return 0;
}
