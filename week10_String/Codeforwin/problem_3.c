#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    char str1[SIZE];
    char str2[SIZE];
    printf("Enter your 1st string: ");
    gets(str1);
    printf("Enter your 2nd string: ");
    gets(str2);
    int i;
    for ( i = 0; str1[i]!='\0'; i++)
    {
        
    }
    int j;
    for ( j = 0; str2[j]!='\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }
    str1[i] = '\0';
    printf("Concatenated string : %s\n",str1);
    
    
    return 0;
}
