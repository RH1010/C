//program name: Fahrenheit to Centigrade convert

#include<stdio.h>
int main()
{
    float c, F;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&F);

    c = (F-32)/1.8;  //law
    printf("Centigrade is: %.2f",c);

    return 0;
}

