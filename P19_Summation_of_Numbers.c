/*
Write a program make a summation of given number (E.g., 1523 Ans: 11)
*/

#include<stdio.h>

int main()
{
    int num, sum=0, modulo;

    printf("Enter Number to find summation of firse and last numbers : ");
    scanf("%d",&num);

    for(int i=num; num!=0; num=num/10)
    {
        modulo = num%10;
        sum += modulo;
    }

    printf("Summetion of Numbers : %d ",sum);

}