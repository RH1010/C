//Program name: Great point of result

#include<stdio.h>
int main()
{
    int mark;
    printf("Please enter any mark: ");
    scanf("%d",&mark);

    if(mark>100 || mark<0)
       printf("Mark is invalid");

    else if(mark>80 && mark<=100)
       printf("Your great: A+ ");

    else if(mark>70 && mark<=79)
        printf("Your great: A ");

    else if(mark>60 && mark<=69)
       printf("Your great: A- ");

    else if(mark>50 && mark<=59)
        printf("Your great: B ");

    else if(mark>40 && mark<=49)
       printf("Your great: C ");

    else if(mark>32 && mark<=39)
        printf("Your great: D ");

    else
        printf("Your great: F ");

    return 0;
}

