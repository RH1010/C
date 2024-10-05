//Program name: Summation of two number and average

#include<stdio.h>
int main()
{
    int num1, num2, sum;
    float avg;

    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);
    sum = num1 + num2;
    printf("Summation number is: %d\n",sum);

    avg = (float)sum/2; //type custing
    printf("The average is: %.2f\n",avg);

    return 0;
}
