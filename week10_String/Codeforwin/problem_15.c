#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    char str[SIZE];
    printf("Enter your string: ");
    gets(str);
    printf("Enter your character: ");
    char ch = getchar();
    int len = 0;
    while(str[len] != '\0') len++;
    
    int i;
    for ( i = len-1 ; i >=0; i--)
    {
        if(str[i] == ch)
            break;
            
    }
    printf("char '%c' from reverse is at index -> %d\n",ch,len-i);
    return 0;
}
