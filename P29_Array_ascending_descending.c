/*
WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
*/

#include<stdio.h>

int main()
{

    int array1[5], array2[5], array3[10];
    int temp[0];
    char check;

    for(int i=0; i<5; i++)                              // Taking array1 elements from users
    {
        printf("Enter Array1 elements : ");
        scanf("%d",&array1[i]);
    }
    
    printf("Array1 elements are : ");                   // Print array1 elements
    for(int i=0; i<5; i++)
    {
        printf("%d ",array1[i]);
    }

    printf("\n");
    for(int i=0; i<5; i++)                              // Taking array2 elements from users
    {
        printf("Enter Array2 elements : ");
        scanf("%d",&array2[i]);
    }
    
    printf("Array2 elements are : ");                   // Print array2 elements
    for(int i=0; i<5; i++)
    {
        printf("%d ",array2[i]);
    }

    printf("\n");
    printf("Combination of array1 and array2 are : ");
    for(int i=0; i<10; i++)
    {
        if(i<5)                                         // Move array1 elements 0-4 to array3 element 0-4                
        {
            array3[i] = array1[i];
        }
        else
        {
           for(int j=0; j<5; j++)                       // Move array2 elements 0-4 to array3 element 5-9
           {
                array3[i] = array2[j];
                i++;
           }
        }
    }
    for(int i=0; i<10; i++)                             // Print array3 elements
    {
        printf("%d ",array3[i]);
    }
    
    printf("\n");
    printf("Enter a for ascending order and d for descending order : ");
    scanf("%s",&check);

    if(check=='a')
    {
        printf("Ascending order : ");
        for(int i=0; i<10; i++)
        {
            for(int j=i+1; j<10; j++)
            {
                if(array3[j]<array3[i])           // Comparing index 0 and 1 of array3 and so on...
                {
                    temp[0] = array3[i];
                    array3[i] = array3[j];
                    array3[j] = temp[0];
                }
            }
        }

        for(int i=0; i<10; i++)
        {
            printf("%d ",array3[i]);
        }
    }
    else
    {
        printf("Descending order : ");
        for(int i=0; i<10; i++)
        {
            for(int j=i+1; j<10; j++)
            {
                if(array3[j]>array3[i])                 // Comparing index 0 and 1 of array3 and so on...
                {
                    temp[0] = array3[i];
                    array3[i] = array3[j];
                    array3[j] = temp[0];
                }
            }
        }

        for(int i=0; i<10; i++)
        {
            printf("%d ",array3[i]);
        }
    }
}