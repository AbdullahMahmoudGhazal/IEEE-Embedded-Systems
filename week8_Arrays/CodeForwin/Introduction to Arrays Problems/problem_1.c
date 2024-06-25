#include<stdio.h>
#define MAX_SIZE 1000
int main(int argc, char const *argv[])
{
    int arr[MAX_SIZE];
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter your elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your Array is: {");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("}\n");
    

     
    return 0;
}
