//Program name: GCD LCM calculation program
/* GCD = Greatest common division
   LCM = Least common multiple
*/
#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,rem,gcd,lcm;

    printf("\t\t\t\t\tWelcome to calculation GCD & LCM\n");
    printf("\t\t\t\t\tGCD = Greatest common division\n");
    printf("\t\t\t\t\tLCM = Least common multiple\n");

    printf("Please enter two number: ");
    scanf("%d %d",&num1,&num2);

    n1 = num1;
    n2 = num2;

    while(n2!=0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    lcm = (num1*num2)/gcd;

    printf("Greatest common division(GCD): %d\n",gcd);
    printf("Least common multiple(LCM): %d\n",lcm);

    return 0;
}
