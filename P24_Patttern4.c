/* WAP to print below pattern
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*
*/

#include<stdio.h>

int main()
{
    for(int i=1; i<=11; i++)
    {
        if(i<=6)
        {
            for(int j=1; j<=i; j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(int j=11; j>=i; j--)
            {
                printf("* ");
            }
        }

        printf("\n");
    }
}
