#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    char str[SIZE];
    char word[SIZE];
    printf("Enter your string: ");
    gets(str);
    printf("Enter your word: ");
    gets(word);
    
    int index=0 ,i= 0;
    bool flag = false;
    while (str[index] != '\0')
    {
        if(str[index] == word[0])
        {

            flag = true;
            while (word[i] != '\0')
            {
                if(str[index+i] != word[i])
                {
                    flag = false;
                    break;
                }
                i++;
            }
            
        }
        if(flag)
            break;
        index++;
    }

    if(flag)
    {
        printf("'%s' found at index %d\n", word, index);
    }
    else
    {
        printf("not found\n");
    }
    return 0;
}
