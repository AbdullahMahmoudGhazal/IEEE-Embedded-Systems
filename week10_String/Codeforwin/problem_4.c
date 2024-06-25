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
    int i = 0;
    while (str1[i] == str2[i])
    {
        i++;
        if(str1[i] == '\0' && str2[i] == '\0') // the end of two strings
        {
            break;
        }
    }
    if(str1[i] == str2[i] )
        printf("Zero\n");
    else if(str1[i] > str2[i] )
        printf("1\n");
    else
        printf("-1\n");
     

    
    
    
    return 0;
}
