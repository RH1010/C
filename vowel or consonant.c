//Program name: Detect the vowel or consonant
/*
#include<stdio.h>
int main()
{
    char ch;

    printf("Please enter any single letter: ");
    scanf("%c",&ch);

    if (ch == 'a')
        printf("Letter is Vowel");
    else if(ch == 'e')
        printf("Letter is Vowel");
    else if(ch == 'i')
        printf("Letter is Vowel");
    else if(ch == 'o')
        printf("Letter is Vowel");
    else if(ch == 'u')
        printf("Letter is Vowel");
    else
        printf("Letter is Consonant");

    return 0;
}
*/
//or
/*
#include<stdio.h>
int main()
{
    char ch;

    printf("Please enter any single letter: ");
    scanf("%c",&ch);

    if (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u')

        printf("Letter is Vowel");
    else
        printf("Letter is Consonant");

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    char ch;
    printf("Please enter any Letter: ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Letter is Vowel: %c",&ch);
        break;
        default:
            printf("Letter is Consonant");
    }

    return 0;
}
*/
