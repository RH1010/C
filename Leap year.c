//Program name:Detect Leap year

#include<stdio.h>
int main()
{
    int year;
    printf("Please enter any year: ");
    scanf("%d",&year);

    if(year % 400==0){
       printf("Leap year");}
    else if (year % 100==0){
        printf("Not a leap year");}
    else if (year%4 ==0){
       printf("Leap year");}
    else
        printf("Not leap year");

    return 0;
}
