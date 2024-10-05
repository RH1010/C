//Program name: Menu Based Temperature conversion
#include<stdio.h>
int main()
{
    int choice;
    float temp, convertedTemp;

    printf("\t\t\t\t\tTEMPERATURE CONERSION MENU\n");  // \t=tab
    printf("\t\t\t\t\t1. Fahrenheit to Celsius\n");
    printf("\t\t\t\t\t2. Celsius to Fahrenheit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        {
            printf("Enter the Fahrenheit temperature: \a"); // \a=alarm
            scanf("%f",&temp);
            convertedTemp=(temp-32)/1.8;
            printf("The Celsius temperature is: %.2f\n",convertedTemp);
            break;
        }
        case 2:
        {
            printf("Enter the Celsius temperature: \a"); // \a=alarm
            scanf("%f",&temp);
            convertedTemp=(1.8*temp)+32;
            printf("The Fahrenheit temperature is: %.2f\n",convertedTemp);
            break;
        }
        default:
            printf("Not a correct option");
    }
}
