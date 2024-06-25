#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    char str[SIZE];
    printf("Enter your string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] -= 'A'- 'a';
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            str[i] += 'A'- 'a';
        }   
    }

    printf("your Toggle case string is: %s\n",str);
    
    return 0;
}
