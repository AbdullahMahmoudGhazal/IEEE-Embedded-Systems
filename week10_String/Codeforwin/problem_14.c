#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    char str[SIZE];
    printf("Enter your string: ");
    gets(str);
    printf("Enter your character: ");
    char ch = getchar();
    int i;
    for ( i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            break;
    }
    printf("char '%c' is at index -> %d\n",ch,i+1);
    return 0;
}
