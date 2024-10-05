//Program name: Bitwise operator
/*  Bitwise operator ahudu bit neya kaj kore ,
    binary neya kaj kire
    shudu integer value show kore , float value kaj kire na
    bit neya kaj korlaw result dakhai integer value
*/
#include<stdio.h>
int main()
{
    int a = 32; //binary 00100000
    int b = 12; //binary 00001100
    int c;

    printf("\t\t\t\t\tWelcome to Bitwise operator\n"); //Just design

    c = a&b;  // multiplication      a*b = 00100000*00001100
    printf("a&b : %d\n",c); //           = 00000000 (0)

    c = a|b; // sum                  a+b = 00100000+00001100
    printf("a|b : %d\n",c); //           = 00101100 (44)

    c = a^b; // not                  a^b = 00100000+00001100  same input thakle output hobe 0
    printf("a^b : %d",c);//              = 00101100 (44)

    return 0;
}
