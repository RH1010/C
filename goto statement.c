//Program name: goto statement
#include<stdio.h>
int main()
{
    int i=1;

    printf("\t\t\t\t\tWelcome to goto statement\n"); //just design

    Rasel: //this name is label
        printf("%d\t",i);
        i++;

     if (i<5)
        goto Rasel; //label is calling hear
     return 0;
}
