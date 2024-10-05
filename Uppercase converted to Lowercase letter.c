//Program name: Uppercase converted to Lowercase letter

#include<stdio.h>
int main()
{
    char upper;

    printf("Please enter any Uppercase letter: ");
    scanf("%c",&upper); //A = 65
    printf("The Lowercase letter: %c",upper+32); //a = 97

    return 0;
}
