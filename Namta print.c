//Program name: Namta print korar program

#include<stdio.h>
int main()
{
    while(1)
    {
        int num, i;
        printf("Please enter any number: ");
        scanf("%d",&num);

        for(i=1; i<=10; i++)
        {
            printf("%d*%d= %d\n",num,i,num*i);
        }
        return 0;
    }
    //return 0;  //ai print use korle onak bar namta babohar kora jabe
}
