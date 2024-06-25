#include<stdio.h>
int isPrime(int num);
int main(int argc, char const *argv[])
{
    int L,R;
    printf("Enter the 1st num: ");
    scanf("%d",&L);
    printf("Enter the 2nd num: ");
    scanf("%d",&R);

    while (L <= R)
    {
        if(isPrime(L))
            printf("%d, ",L);
        L++;
    }
    
    return 0;
}

int isPrime(int num)
{
    for (int i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
    
}