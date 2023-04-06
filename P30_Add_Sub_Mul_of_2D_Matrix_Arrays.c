/*
WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
*/

#include<stdio.h>

int main()
{
    int array1[2][2];
    int array2[2][2];
    int sum[2][2];

    for(int i=0; i<2; i++)                          // This for loop is used for taking value of array1 from users for row
    {
        for(int j=0; j<2; j++)                      // This for loop is used for taking value of array1 from users for column
        {
        printf("Enter Value of array1 : ");
        scanf("%d",&array1[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<2; i++)                         // This for loop is used for print value of array1 for row
    {
        for(int j=0; j<2; j++)                     // This for loop is used for print value of array1 for column
        {
            printf("%d ",array1[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<2; i++)                         // This for loop is used for taking value of array2 from users for row
    {
        for(int j=0; j<2; j++)                     // This for loop is used for taking value of array2 from users for column
        {
        printf("Enter Value of array2 : ");
        scanf("%d",&array2[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<2; i++)                         // This for loop is used for print value of array2 for row
    {
        for(int j=0; j<2; j++)                     // This for loop is used for print value of array2 for column
        {
            printf("%d ",array2[i][j]);
        }
        printf("\n");
    }

    printf("\nAddition of array1 and array2 \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            sum[i][j]=array1[i][j]+array2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    printf("\nSubstraction of array1 and array2 \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            sum[i][j]=array1[i][j]-array2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplication of array1 and array2 \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            sum[i][j]=array1[i][j]*array2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}
