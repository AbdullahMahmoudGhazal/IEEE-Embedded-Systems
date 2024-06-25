#include<stdio.h>
int print_num(int i,int f);
int main(int argc, char const *argv[])
{
    int lower_num, upper_num;
    printf("Enter the 1st number: ");
    scanf("%d",&lower_num);
    printf("Enter the last number: ");
    scanf("%d",&upper_num);
    
    if(lower_num%2==0)
    {
        printf("Even Numbers: [");
        print_num(lower_num,upper_num);
        printf("]\n");
        printf("Odd Numbers: [");
        print_num(lower_num+1,upper_num);
        printf("]\n");
    }
    else
    {
        printf("Even Numbers: [");
        print_num(lower_num+1,upper_num);
        printf("]\n");
        printf("Odd Numbers: [");
        print_num(lower_num,upper_num);
        printf("]\n");
    }
    

    return 0;
}

int print_num(int i,int f)
{
    if(i>f) return;
        
    printf("%d, ",i);
    return print_num(i+2,f);
}
