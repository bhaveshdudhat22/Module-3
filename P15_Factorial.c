/*
WAP to print factorial of given number
*/

#include<stdio.h>

int main()
{
    int num, sum=1;

    printf("Enter number to find factorial : ");
    scanf("%d",&num);
    printf("%d! = ",num);

    for(int i=num; i>=1; i--)
    {
        printf("%d",i);
        if(i>1)
        {
        printf(" x ");
        }
        sum *= i;
    }

    printf(" = %d",sum);
}