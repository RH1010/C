//Program name: Multiple input of average and sum  print
#include<stdio.h>
int main()
{
    int num1, num2, num3, sum;
    float avg;

    printf("Please enter the three number: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    sum = num1+num2+num3;

    avg = (float)sum/3;

    printf("summation is : %d\n",sum);
    printf("average is : %.2f",avg);

    return 0;

    }
