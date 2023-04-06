/*
WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
*/

#include<stdio.h>

int main()
{
    int num, reverse=0, modulo;

    printf("Enter numers to find reverse order : ");
    scanf("%d",&num);

    for(int i=num; num!=0; num=num/10)
    {
        modulo=num%10;
        reverse=reverse*10+modulo;
    }
    printf("Reverse Order of Number : %d",reverse);
}