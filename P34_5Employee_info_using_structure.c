/*
Write a program of structure for five employee that provides the following information.
Print and display empno, empname, address and age.
*/

#include<stdio.h>
#include<string.h>

struct empinfo
{
    int empnum;
    char empname[30];
    char empadd[30];
    int empage;
};

int main()
{
    struct empinfo obj1 = {1000000001, "Brijesh", "Surat  ", 21};
    struct empinfo obj2 = {1000000002, "Bhavin ", "Abad   ", 22};
    struct empinfo obj3 = {1000000003, "Bhautik", "Baroda ", 23};
    struct empinfo obj4 = {1000000004, "Bella  ", "Bharuch", 24};
    struct empinfo obj5 = {1000000005, "Bhumi  ", "Kim    ", 25};

    printf("Employee1 Number : %d %s %s %d \n",obj1.empnum, obj1.empname, obj1.empadd, obj1.empage);
    printf("Employee2 Number : %d %s %s %d \n",obj2.empnum, obj2.empname, obj2.empadd, obj2.empage);
    printf("Employee3 Number : %d %s %s %d \n",obj3.empnum, obj3.empname, obj3.empadd, obj3.empage);
    printf("Employee1 Number : %d %s %s %d \n",obj4.empnum, obj4.empname, obj4.empadd, obj4.empage);
    printf("Employee1 Number : %d %s %s %d \n",obj5.empnum, obj5.empname, obj5.empadd, obj5.empage);

}