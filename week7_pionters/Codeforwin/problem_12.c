#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    char str[SIZE];
    printf("Enter your string: ");
    scanf("%s",str);
    char *ptr = str;

    int i=0;
    while (*(ptr + i) != '\0')
    {
        i++;
    }

    printf("Length of the string = %d",i);
    
    
    return 0;
}
