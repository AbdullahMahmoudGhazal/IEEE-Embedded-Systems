#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    int a[SIZE];
    printf("Enter the size: ");
    int n;
    scanf("%d",&n);
    printf("Enter your Array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int *ptr = NULL;
    ptr = a;
    int a_2[SIZE];
    int *ptr_2 = NULL;
    ptr_2 = a_2;
    for (int i = 0; i < n; i++)
    {
        *(ptr_2+i) = *(ptr+i);
    }
    printf("source Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(ptr + i));
    }
    printf("\n");
    printf("Copied Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(ptr_2 + i));
    }
    
    return 0;
}
