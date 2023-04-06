/*
WAP to show Monday to Sunday using switch case
*/

#include<stdio.h>

int main()
{

    int weekdays;

    printf("Enter Numbers between 1 to 7 to display corresponding weekdays : ");
    scanf("%d",&weekdays);

    switch(weekdays)
    {
        case 1:
        printf("Number 1 Represent Sunday");
        break;

        case 2:
        printf("Number 2 Represent Monday");
        break;

        case 3:
        printf("Number 3 Represent Tuesday");
        break;

        case 4:
        printf("Number 4 Represent Wednesday");
        break;

        case 5:
        printf("Number 5 Represent Thursday");
        break;

        case 6:
        printf("Number 6 Represent Friday");
        break;

        case 7:
        printf("Number 7 Represent Saturday");
        break;

        default:
        printf("You Entered Wrong Number. Please Enter Numbers between 1 to 7");
        break;
    }
}