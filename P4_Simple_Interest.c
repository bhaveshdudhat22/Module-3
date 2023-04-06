/*
WAP to find simple interest
*/

#include<stdio.h>

int main()
{

    float interest, amount, time, rate;

    printf("Enter Princile Amount of Loan : ");
    scanf("%f",&amount);
    printf("Enter Time Duration in year : ");
    scanf("%f",&time);
    printf("Enter Interest Rate : ");
    scanf("%f",&rate);

    interest=(amount*time*rate)/100;
    printf("Your Yearly Simple Interest : %.2f ",interest);
}