#include<stdio.h>
#include<math.h>
float IsArmstrong(int num);
int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Enter your num1: ");
    scanf("%d",&num1);    
    printf("Enter your num2: ");
    scanf("%d",&num2);    
    while (num1 <= num2)
    {
        if(num1 == IsArmstrong(num1))
            printf("%d, ", num1);
        num1++;
    }
    
    return 0;
}
float IsArmstrong(int num)
{
    int temp,n=0,rem; 
    float sum = 0.0;

    temp = num;
    while (temp)
    {
        temp = temp / 10;
        n++;        
    }
    while (num)
    {
        rem = num % 10;
        sum+= pow(rem,n);
        num = num / 10;
    }
    return sum;
    
}

