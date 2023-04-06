/*
Write a program to find out the max number from given array using function
*/

#include<stdio.h>

void maxnumber(int array[5]);

int main()
{
    int array[5];

    for(int i=0; i<5; i++)                          // Assign Argument to function array from main() function
    {                                               // or we can directly assing argument. EX. int array[5] = {50, 10, 90, 85, 60};
        printf("Enter Number of array : ");
        scanf("%d",&array[i]);
    }

    int max=0;

    maxnumber(array);                           // Calling function - no need to write [] after array.

    for(int i=0; i<5; i++)
    {
        if(array[i]>=max)
        {
            max=array[i];
        }
    }

    printf("%d is Max number of array",max);
}

void maxnumber(int array[5])
{
    for(int i=0; i<5; i++)
    {
        printf("%d \n",array[i]);
    }
}



