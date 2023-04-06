/*
WAP to show difference between Structure and Union
*/

#include<stdio.h>
#include<string.h>

struct structure_member
{
    int memberid;
    char membername[100];
    int membersalary;
};

union union_member
{
    int memberid;
    char membername[100];
    int membersalary;
};

int main()
{
    printf("\nAccessing one member at time: \n");

    struct structure_member obj1;
    printf("Structure member \n");
    obj1.memberid = 1000;
    printf("Member id : %d \n",obj1.memberid);
    strcpy(obj1.membername,"Brijesh");
    printf("Member Name : %s \n",obj1.membername);
    obj1.membersalary = 80000;
    printf("Member Salary : %d \n",obj1.membersalary);

    union union_member obj2;
    printf("Union member \n");
    obj2.memberid = 2000;
    printf("Member id : %d \n",obj2.memberid);
    strcpy(obj2.membername,"Bhumi");
    printf("Member Name : %s \n",obj2.membername);
    obj2.membersalary = 90000;
    printf("Member Salary : %d \n",obj2.membersalary);

    printf("\nAccessing multiple member at time: \n");

    printf("Structure member \n");
    printf("Member id : %d \n",obj1.memberid);
    printf("Member Name : %s \n",obj1.membername);
    printf("Member Salary : %d \n",obj1.membersalary);

    printf("Union member \n");
    printf("Member id : %d \n",obj2.memberid);
    printf("Member Name : %s \n",obj2.membername);
    printf("Member Salary : %d \n",obj2.membersalary);
    printf("While we accessing multiple member at time in union than it not handle it. it shows only last member. \n");

    printf("\nDifferene beetween Structure and Union \n");
    printf("Structure can access multiple member at a time \n");
    printf("Union can access only one member at a time \n");
}
