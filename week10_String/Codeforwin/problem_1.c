#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    char str[SIZE];
    printf("Enter your string: ");
    gets(str);
    int cntr = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        cntr++;
    }
    printf("length of string = %d",cntr);
    return 0;
}
