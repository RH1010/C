//Program name: Result pass or fail

#include<stdio.h>
int main()
{
    int mark;
    printf("Please enter any mark: ");
    scanf("%d",&mark);

    if(mark>33)
       printf("Congratulations you are pass");
    else
        printf("oops sorry you are fail");

    return 0;
}
