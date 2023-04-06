/* WAP to print below pattern
A
B C
D E F
G H I J
K L M N O
*/

#include<stdio.h>

int main()
{
    char alphabet = 'A';
    
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%c ",alphabet);
            alphabet++;
        }
        printf("\n");
    }
}