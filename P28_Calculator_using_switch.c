/*
WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
*/

#include<stdio.h>

int main()
{
    float num1, num2, result;
    char calci;

    printf("Enter Number 1 : ");
    scanf("%f",&num1);
    printf("Enter Number 2 : ");
    scanf("%f",&num2);
    printf(" + for addition \n - for substraction \n * for multiplication \n / for division \n Enter here : ");
    scanf("%s",&calci);

    switch(calci)
    {
        case '+':
        result = num1+num2;
        printf("Additon of %.2f + %.2f : %.2f",num1,num2,result);
        break;

        case '-':
        result = num1-num2;
        printf("Substraction of %.2f - %.2f : %.2f",num1,num2,result);
        break;

        case '*':
        result = num1*num2;
        printf("Multiplication of %.2f * %.2f : %.2f",num1,num2,result);
        break;

        case '/':
        result = num1/num2;
        printf("Division of %.2f / %.2f : %.2f",num1,num2,result);
        break;

        default:
        printf("You Entered wrong key");
        break;
    }
}