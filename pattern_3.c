//Program name:Pattern_3
/*
#include<stdio.h>
int main()
{
    int n,row,col;

    printf("Enter N: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}
*/
//Program name:Pattern_4
/*
#include<stdio.h>
int main()
{
    int n,row,col;

    printf("Enter N: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }
    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }
    return 0;
}
*/
//Program name:Pattern_5
/*
#include<stdio.h>
int main()
{
    int n,row,col;

    printf("Enter N: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ",col+64); //Capital letter ABC (+64)  // Small letter abc (+96)
        }
        printf("\n");
    }
    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ",col+64);
        }
        printf("\n");
    }
    return 0;
}
*/
//Program name:Pattern_6
/*
#include<stdio.h>
int main()
{
    int n,row,col;

    printf("Enter N: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ",row+64);  //Capital letter ABC (+64)  // Small letter abc (+96)
        }
        printf("\n");
    }
    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ",row+64);
        }
        printf("\n");
    }
    return 0;
}
*/
//Program name:Pattern_7
/*
#include<stdio.h>
int main()
{
    int n,row,col;

    printf("Enter N: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/
