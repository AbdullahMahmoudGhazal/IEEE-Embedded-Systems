#include<stdio.h>
#define PI 3.14
double diameter(double r);
double circumference (double r);
double area (double r);

int main(int argc, char const *argv[])
{
    float r; 
    printf("Enter the radius: ");
    scanf("%f",&r);
    printf("the diameter = %0.3f\n",diameter(r));
    printf("the circumference = %0.3f\n",circumference(r));
    printf("the area = %0.3f\n",area(r));
    return 0;
}
double diameter(double r)
{
    return 2*r;
}
double circumference (double r)
{
    return 2*PI*r;
}
double area (double r)
{
    return PI*r*r;
}