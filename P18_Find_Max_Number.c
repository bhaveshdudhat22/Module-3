/*
Write a program to find out the max from given number (E.g., No: 1562 Max number is 6)
*/

#include<stdio.h>

int main()
{
    int num, max=0, modulo;

    printf("Enter Number : ");
    scanf("%d",&num);

    for(int i=num; num!=0; num=num/10)
    {
        modulo = num%10;
        if(modulo>=max)
        {
            max = modulo;
        }
    }

    printf("%d is a max number",max);
}
