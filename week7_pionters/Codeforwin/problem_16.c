#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    char str[SIZE];
    printf("Enter your string: ");
    gets(str);
    char *ptr = str;
    
    int n=0;
    while (*(ptr+n) != '\0')
    {
        n++;
    }
    
    char *ptr_r = str + (n-1);

    for (int i = 0; i < n; i++)
    {
        printf("%c",*(ptr_r - i));
    }
    
    
    
    
    return 0;
}
