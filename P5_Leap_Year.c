/*
WAP to check if the given year is a leap year or not.
*/

#include<stdio.h>

int main()
{

    int year, leapyear;

    printf("Enter year to check is it Leap Year or Not : ");
    scanf("%d",&year);

    leapyear=year%4;
    if(leapyear==0)
    {
        printf("Year %d is leap year",year);
    }
    else
    {
        printf("Year %d is Not leap year",year);
    }

}