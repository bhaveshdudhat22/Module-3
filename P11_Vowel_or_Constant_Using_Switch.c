/*
WAP to show Vowel or Consonant using switch case
*/

#include<stdio.h>

int main()
{
    char vowel;

    printf("Enter Small alphabet to check is it Vowel or Constatns : ");
    scanf("%c",&vowel);

    switch(vowel)
    {
        case 'a':
        printf("Alphabet '%c' is a Vowel",vowel);
        break;

        case 'e':
        printf("Alphabet '%c' is a Vowel",vowel);
        break;

        case 'i':
        printf("Alphabet '%c' is a Vowel",vowel);
        break;

        case 'o':
        printf("Alphabet '%c' is a Vowel",vowel);
        break;

        case 'u':
        printf("Alphabet '%c' is a Vowel",vowel);
        break;

        default:
        printf("Alphabet '%c' is a constant",vowel);
        break;
    }
}