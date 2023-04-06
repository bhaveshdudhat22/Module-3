/*
WAP to find number is even or odd using ternary operator
*/

#include<stdio.h>

int main()
{
    int num1;

    printf("Enter Number to check is it Even or Odd : ");
    scanf("%d",&num1);

    (num1%2==0) ? printf("Number %d = Even Number",num1) : printf("Number %d = Odd Number",num1);

}