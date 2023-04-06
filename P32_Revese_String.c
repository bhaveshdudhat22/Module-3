/*
WAP to reverse a string and check that the string is palindrome or not
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char string[10];
    char palindrome[10];
    int len, count;
    char temp;

    printf("Enter String : ");
    scanf("%s",&string);
    strcpy(palindrome,string) ;     // We copy string to palindrome to check in last is it palindrome or not.

    len = strlen(string);
    count = len-1;                  // Index starting from 0, so, if string lenth is 5, then we need 0-4, so we - 1 from string to get number 4.
    
    for(int i=0; i<count; i++)
    {
        temp = string[i];            // Initially i=0, so, 0 index = 1st word of string which is move to temp.
        string[i] = string[count];   // Initially string[count] = last word of string, so last word of string move to 0 index = 1st word.
        string[count] = temp;       // temp = 0 index = 1st word of string, now it move to  string[count] = last word of string.
        count--;
    }

    printf("Revese of string is : %s",string);

    int compare = strcmp(palindrome,string);    // Compare actual string to reverse string, result is 0 if both are equal.

    if(compare==0)
    {
        printf("\nGiven String is palindrome"); 
    }
    else
    {
        printf("\nGiven String is not palindrome");
    }  
}