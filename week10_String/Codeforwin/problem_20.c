#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    char str[SIZE];
    printf("Enter your string: ");
    gets(str);
    int len = 0;
    while(str[len] != '\0') len++;

    int freq[26] = {0};
    for (int i = 0; i < len; i++) // loop of string
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            freq[str[i]-65]++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            freq[str[i]-97]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if(freq[i]>0)
        {
            printf("Freq of '%c' = %d\n",(i+65),freq[i]);
        }
    }
    
    
    
    return 0;
}
