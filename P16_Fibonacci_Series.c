/*
WAP to print Fibonacci series up to given numbers
*/

#include<stdio.h>

int main()
{
    int fibonum, zero=0, one=1, sum;

    printf("Enter Number to see Fibonacci series : ");
    scanf("%d",&fibonum);

    printf("%d \n",zero);
    printf("%d \n",one);

    for(int i=2; i<=fibonum; i++)
    {
        sum=zero+one;
        printf("%d \n",sum);
        zero=one;
        one=sum;
    }
}