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
    printf("char '%c' is at index -> [");
    for ( i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
           printf("%d ",i+1);
    }
    printf("]\n");
    return 0;
}
