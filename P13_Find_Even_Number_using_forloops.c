/*
WAP to take 10 no. Input from user and find out How many Even numbers are there.
 WAP to take 10 no. Input from user and find out …
1. How many Even numbers are there
3. How many odd numbers are there
3. Sum of even numbers
7. Sum of odd numbers
*/

#include<stdio.h>

int main()
{
    int sum_even=0, sum_odd=0;

    printf("Below are odd numbers in 1 to 10 \n");
    for(int i=1; i<=10; i++)
    {
        if(i%2!=0)
        {
            printf("%d \n",i);
            sum_odd += i;
        }
    }

    printf("Below are Even numbers in 1 to 10 \n");    
    for(int i=1; i<=10; i++)
    {
        if(i%2==0)
        {
            printf("%d \n",i);
            sum_even += i;
        }
    }

    printf("Sum of Odd Number is %d \n",sum_odd);
    printf("Sum of Even Number is %d \n",sum_even);
}