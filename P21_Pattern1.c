/* WAP to print below pattern
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/

#include<stdio.h>

int main()
{
    int zero=0, one=1, mod;

    for(int i=1; i<=5; i++)
    {   
        for(int j=1; j<=i; j++)
        {
            mod=j%2;
            if(mod!=0)
            {
                printf("%d ",one);
            }
            else
            {
                printf("%d ",zero);
            }   
        }
        printf("\n");
    }

}