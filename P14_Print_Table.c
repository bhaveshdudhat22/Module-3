/*
WAP to print table up to given numbers
*/

#include<stdio.h>

int main()
{
    int num, table;

    printf("Enter number to print table : ");
    scanf("%d",&num);

    for(int i=1; i<=10; i++)
    {
        table = i*num;
        printf("%d X %d = %d \n",num,i,table);
    }

}