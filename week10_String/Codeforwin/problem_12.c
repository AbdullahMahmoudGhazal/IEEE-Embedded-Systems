#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    char str[SIZE];
    printf("Enter your 1st string: ");
    gets(str);
    int length=0;
    while (str[length] != '\0')
    {
        length++;
    }
    int R = length-1;
    int L = 0;
    while (L <= R)
    {
        if(str[L] != str[R])
            break;
         L++;
         R--;
    }

    if (L>=R)
    {
        printf("String is palindrome ^0^\n");
    }
    else
    {
        printf("String is not palindrome U_U\n");
    }
    
    
    
    
    
    
    
    return 0;
}
