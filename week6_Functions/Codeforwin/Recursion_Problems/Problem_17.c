#include<stdio.h>

int print_sum(int num);
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter your num: ");
    scanf("%d",&num);
    printf("Sum of digits = %d",print_sum(num));
    return 0;
}
int print_sum(int num)
{
    if(num == 0)
        return 0;

    return(num%10 + print_sum(num/10));
}
