#include<stdio.h>
#include<math.h>

int reverse(int num);
int main(int argc, char const *argv[])
{   
    int num;
    printf("Enter your num: ");
    scanf("%d",&num);
    if(num == reverse(num))
    {
        printf("Number is a palindrome ^_^\n");
    }
    else
    {
        printf("Number is not a palindrome ~_~\n");
    }

    return 0;
}

int reverse(int num)
{

    if(num==0)
        return 0;
    int digits = (int)log10(num)+1;
    
    return ((num%10)*pow(10,digits-1) + reverse(num/10));
}
