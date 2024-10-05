//Program name:Uppercase letter converted to Lowercase

#include<stdio.h>
int main()
{
    char upper;

    printf("Please enter any Uppercase letter: ");
    scanf("%c",&upper);
    printf("The Lowercase letter: %c",upper+32);

    return 0;
}
