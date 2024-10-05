//Program name: User input number and print the total value of number

#include<stdio.h>
int main()
{
    int counter, N;

    printf("Enter a Positive Number: ");
    scanf("%d",&N);

    printf("Printing Numbers form 1 to %d\n", N);
    for(counter = 1; counter <= N; counter++)
    {
        printf("%d \n", counter);
    }

    return 0;
}

