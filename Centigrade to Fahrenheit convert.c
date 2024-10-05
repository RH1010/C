//program name: Centigrade to Fahrenheit convert

#include<stdio.h>
int main()
{
    float c, F;

    printf("Enter temperature in Celsius: ");
    scanf("%f",&c);

    F = (c*1.8)+32;  //law
    printf("Fahrenheit is: %f",F);

    return 0;
}
