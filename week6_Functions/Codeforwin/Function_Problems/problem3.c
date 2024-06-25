#include<stdio.h>
int max(int n1, int n2);
int min(int n1, int n2);
int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    printf("maximum number = %d\n",max(num1,num2));
    printf("minimum number = %d\n",min(num1,num2));
    return 0;
}
int max(int n1, int n2)
{
    return ((n1 > n2)? n1 : n2);
}
int min(int n1, int n2)
{
    return ((n1 > n2)? n2 : n1);
}