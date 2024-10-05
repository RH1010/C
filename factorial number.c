//Program name: factorial number
/*formula n! = n × (n - 1) × (n - 2) × (n - 3) × ... × 1
 factorial 5! = 5*4*3*2*1
              = 120 Answer
*/

#include<stdio.h>
int main()
{
    int n, i, fact=1;

    printf("Please enter any positive number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        fact = fact*i;
    }
    printf("This factorial number is:  %d",fact);

    return 0;
}
