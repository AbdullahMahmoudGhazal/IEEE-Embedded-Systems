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
    char *ptr1 = str1;
    char *ptr2 = str2;

    int i=0;
    while (*(ptr1 + i) != '\0')
    {
        //ptr1++;
        i++;
    }

    int j=0;
    while (*(ptr2 + j) != '\0')
    {
        *(ptr1 + i) = *(ptr2 + j);
        i++;
        j++; 
    }
    *(ptr1+i) = '\0';
    
    printf("%s",str1);
    

    
    
    return 0;
}
