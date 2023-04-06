/*
WAP to swap two numbers without using third variable
*/

#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter Number1 : ");
    scanf("%d",&num1);
    printf("Enter Number2 : ");
    scanf("%d",&num2);

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("After Swap Number1 Value : %d \n",num1);
    printf("After Swap Number2 Vlaue : %d \n",num2);
}
