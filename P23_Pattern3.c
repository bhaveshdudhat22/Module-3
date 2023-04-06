/* WAP to print below pattern
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
*/

int main()
{
    int rows = 5;

    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<2*(rows-i)-1; j++)    // inner loop 1 to print white spaces
        {
            printf(" ");
        }
        for (int k=0; k<(2*i)+1; k++)             // inner loop 2 to print star * character
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}