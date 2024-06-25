#include<stdio.h>
int cube(int n);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("%d ^ 3 = %d",n,cube(n));
    return 0;
}
int cube(int n)
{
    return n*n*n;
}