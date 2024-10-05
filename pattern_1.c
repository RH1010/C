//Program name:Pattern_1
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
    return 0;
}
*/
//Program name:Pattern_2
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
    return 0;
}
*/
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
            printf("%d ",col%2);
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
            printf("%d ",row%2);
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
            printf("%c ",row+64); //Capital letter ABC (+64)  // Small letter abc (+96)
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
    return 0;
}
*/
//Program name:Pattern_8
#include <stdio.h>
/*
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    PascalsTriangle(n);
    return 0;
}

void PascalsTriangle(int n) {
    for (int row = 0; row < n; row++) {
        for (int j = 0; j < n - row - 1; j++) {
            printf(" ");
        }
        int c = 1;
        for (int i = 0; i <= row; i++) {
            printf("%d ", c);
            c = c * (row - i) / (i + 1);
        }
        printf("\n");
    }
}
*/
//Program name:Pascal's Triangle

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int row = 0; row < n; row++) {
        for (int j = 0; j < n - row - 1; j++)
        {
            printf(" ");
        }
        int c = 1;
        for (int i = 0; i <= row; i++) {
            printf("%d ", c);
            c = c * (row - i) / (i + 1);
        }
        printf("\n");
    }
    return 0;
}




