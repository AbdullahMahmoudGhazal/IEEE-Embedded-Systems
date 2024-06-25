#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    int a[SIZE];
    int n;
    printf("Enter your size: ");
    scanf("%d",&n);
    printf("Enter your elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int *ptr_to_1st = a;
    int *ptr_to_last = ptr_to_1st+(n-1);
    int temp;
    

    printf("Source array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(ptr_to_1st+i));
    }
    printf("\n");

    printf("Reversed Array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(ptr_to_last - i));
    }
    
    
    
    



    return 0;
}
