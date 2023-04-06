/*
Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)
*/

#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter Value a : ");
    scanf("%d",&a);
    printf("Enter Value b : ");
    scanf("%d",&b);

    printf("Addtion         of a+b   : %d \n",a+b);
    printf("Substraction    of a-b   : %d \n",a-b);
    printf("Multiplication  of a*b   : %d \n",a*b);
    printf("Divition        of a/b   : %d \n",a/b);
    printf("Modulo          of a./.b : %d \n",a%b);
}