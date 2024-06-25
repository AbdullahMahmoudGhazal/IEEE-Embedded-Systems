#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    int a1[SIZE];
    int a2[SIZE];

    int *ptr1 = a1;
    int *ptr2 = a2;
    int n;

    printf("Enter Your size: ");
    scanf("%d",&n);
    printf("Enter your 1st Array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&*(ptr1+i));
    }
    
    printf("Enter your 2nd Array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&*(ptr2+i));
    }

    int temp;

    for (int i = 0; i < n; i++)
    {
        temp = *(ptr1 + i);
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = temp;
    }

    printf("1st Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(ptr1 + i));
    }
    printf("\n");
    printf("2nd Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(ptr2 + i));
    }
    



    return 0;
}
