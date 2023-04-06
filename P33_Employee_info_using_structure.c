/*
Write a program of structure employee that provides the following information - print and display empno, empname, address and age.
*/

#include<stdio.h>
#include<string.h>

struct empinfo
{
    int empno;
    char empname[30];
    char empadd[30];
    int empage;
};

int main()
{
    struct empinfo obj;


    printf("Enter Employee Number : ");         // Or we can directly assign structure info EX. obj.empno = 1234;
    scanf("%d",&obj.empno);
    printf("Enter Employee Name : ");           // Or we can directly assign structure info EX. strcpy(obj.empname, "Brijesh");
    scanf("%s",&obj.empname);
    printf("Enter Employee Address : ");        // Or we can directly assign structure info EX. strcpy(obj.empadd, "Surat");
    scanf("%s",&obj.empadd);
    printf("Enter Employee Age : ");            // Or we can directly assign structure info EX. obj.empage = 22;
    scanf("%d",&obj.empage);

    printf("Employee Number : %d \n",obj.empno);
    printf("Employee name : %s \n",obj.empname);
    printf("Employee Address : %s \n",obj.empadd);
    printf("Employee Age : %d \n",obj.empage);

}
