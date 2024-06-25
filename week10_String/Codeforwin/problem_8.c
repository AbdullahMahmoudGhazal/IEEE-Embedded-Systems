#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    char str[SIZE];
    printf("Enter your string: ");
    gets(str);
    int cntr_algha = 0;
    int cntr_digits  = 0;
    int cntr_special_ch = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
        {
            cntr_algha++;
        }
        else if(str[i]>= '0' && str[i] < '9')
        {
            cntr_digits++;
        }
        else
        {
            cntr_special_ch++;
        }
    }
    printf("No of alphabets = %d\n",cntr_algha);
    printf("No of digits  = %d\n",cntr_digits);
    printf("No of special characters = %d\n",cntr_special_ch);
    return 0;
}
