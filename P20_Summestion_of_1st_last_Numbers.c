/*
Write a program make a summation of given number (E.g., 1523 Ans: 11)
*/

#include<stdio.h>

int main()
{
    int num, firstnum, lastnum, sum, modulo=11;

    printf("Enter Number to find summation of firse and last numbers : ");
    scanf("%d",&num);

    for(int i=num; num!=0; num=num/10)
    {
        if(modulo==11)                    //If we do modulo of any number then modulo posibility is 0-9, so we used morethan 9 number here to find last number.
        {
        modulo = num%10;                  // Find last number here.
        lastnum = modulo;
        }
        else
        {
            modulo = num%10;              // Find first number here.
            firstnum = modulo;
        }
    }
    
    sum=firstnum+lastnum;
    printf("Summetion of Numbers : %d ",sum);

}