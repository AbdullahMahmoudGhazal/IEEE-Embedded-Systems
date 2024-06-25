#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    char str[SIZE];
    char revers_str[SIZE];
    printf("Enter your 1st string: ");
    gets(str);
    int length=0;
    while (str[length] != '\0')
    {
        length++;
    }
    int R = length-1;
    int L = 0;
    while (str[L] != '\0')
    {
         revers_str[L] = str[R];
         L++;
         R--;
    }
    revers_str[L] = '\0';
    printf("your string : %s\n",str);
    printf("your reversed string : %s\n",revers_str);
    
    
    
    
    
    
    return 0;
}
