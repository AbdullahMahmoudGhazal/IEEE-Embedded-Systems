#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    char str1[SIZE];
    char str2[SIZE];
    printf("Enter your string: ");
    gets(str1);
    int i;
    for ( i = 0; str1[i]!='\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0'; // terminate the last element
    printf("The string: %s\n",str1);
    printf("The copied string: %s\n",str2);

    
    return 0;
}
