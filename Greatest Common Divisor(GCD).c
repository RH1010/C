#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter two number: ");
    scanf("%d %d", &num1,&num2);

    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 = num1 - num2;
        }
        else
        {
            num2 = num2 - num1;
        }
    }
    printf("GCD of two numbers is: %d\n", num2);

    return 0;
}
/*
#include <math.h>
#include <stdio.h>
int gcd(int a, int b)
{
    int result = ((a < b) ? a : b);
    while (result > 0) {

        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}

int main()
{
    int a, b;
    printf ("Enter any two numbers: ");
    scanf("%d%d",&a,&b);
    printf("GCD of two numbers %d and %d is: %d ", a, b, gcd(a, b));
    return 0;
}
*/

