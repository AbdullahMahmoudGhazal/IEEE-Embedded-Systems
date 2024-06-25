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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("sum = %d\n",sum);
    

     
    return 0;
}
