/*
WAP Find out length of string without using inbuilt function
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char string[30];
    int lenght=0;

    printf("Enter String upto 30 words : ");
    scanf("%s",&string);

    for(int i=0; string[i]!='\0'; i++)
    {
        lenght++;
    }

    printf("Lengh of String is : %d",lenght);

}