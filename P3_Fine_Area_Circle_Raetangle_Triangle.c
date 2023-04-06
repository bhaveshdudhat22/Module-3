/*
WAP to find area of circle, rectangle and triangle
*/

#include<stdio.h>

int main()
{

    float circle, radius, PI=3.14;
    float rectangle, lenght, width;
    float triangle, base, height;

    printf("\n ********* Area of Circle ********* \n");
    printf("Enter Radius of Circle r : ");
    scanf("%f",&radius);
    circle=PI*radius*radius;
    printf("Area of Circle : %.2f \n",circle);

    printf("\n ********* Area of Rectangle ********* \n");
    printf("Enter Lenght of Rectangle : ");
    scanf("%f",&lenght);
    printf("Enter Width of Rectangle : ");
    scanf("%f",&width);
    rectangle=lenght*width;
    printf("Area of Rectangle : %.2f \n",rectangle);

    printf("\n ********* Area of Triangle ********* \n");
    printf("Enter Base of Triangle : ");
    scanf("%f",&base);
    printf("Enter Height of triangle : ");
    scanf("%f",&height);
    triangle=0.5*base*height;
    printf("Area of Triangle : %.2f \n",triangle);

}