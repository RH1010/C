//Program name: Lowercase converted to Uppercase letter

#include<stdio.h>
int main()
{
    char lower;

    printf("Please enter any lowercase letter: ");
    scanf("%c",&lower);
    printf("The Uppercase letter: %c",lower-32);

    return 0;
}
