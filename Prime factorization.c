#include<stdio.h>

void prime_factorization(int n)
{
    int i=2;
    printf("Prime factorization of %d= ",n);
    while(n!=1)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                printf("%d ",i);
                n=n/i;
            }
        }
        i++;
    }
}


int main()
{
    int n;
    printf("Please enter a number: ");
    scanf("%d",&n);
    prime_factorization(n);
    return 0;
}
