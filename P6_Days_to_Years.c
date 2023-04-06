/*
WAP to convert years into days and days into years
*/

#include<stdio.h>

int main()
{

    float days, daystoyears, years, yearstodays;

    printf("\n ******** Days to Years ******** \n");
    printf("Enter Days : ");
    scanf("%f",&days);
    daystoyears=days/365;
    printf("%.2f Days = %.2f Years \n",days,daystoyears);
    
    printf("\n ******** Years to Days ******** \n");
    printf("Enter Years : ");
    scanf("%f",&years);
    yearstodays=years*365;
    printf("%.2f Years = %.2f Days \n",years,yearstodays);
}