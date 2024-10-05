//Program name: Palindrome number যে শব্দ কবিতা প্রভৃতি উলটা করিয়া পড়িলেও একই থাকে

#include<stdio.h>
int main()
{
    int num, temp, r, sum=0;

    printf("Please enter any positive number: ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        r = temp % 10;
        sum = sum*10+r;
        temp = temp / 10;
    }
    if(num==sum)
        printf("Palindrome number\n");
    else
        printf("Not a Palindrome number");

        return 0;
}
