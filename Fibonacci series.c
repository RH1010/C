//Program name: Fibonacci series
//0 1 1 2 3 5 8 13 21 34
#include<stdio.h>
int main()
{
    int i,num, t1=0,t2=1, nextterm=t1+t2;

    printf("Enter the number of terms: ");
    scanf("%d",&num);
    printf("Fibonacci series: %d %d ",t1,t2);

    for(i=3; i<=num; i++)
    {
        printf("%d ",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    }
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int first=0, second=1, count=0, fibo, n;

    printf("Please enter number range: ");
    scanf("%d",&n);

    while(count<n)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d ",fibo);
        count++;
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a[30],n,i;

    printf("How many Fibonacci Number: ");
    scanf("%d",&n);

    a[0] = 0;
    a[1] = 1;

    for(i=2;i<n;i++)
    {
        a[i] = a[i-1]+a[i-2];
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
*/
