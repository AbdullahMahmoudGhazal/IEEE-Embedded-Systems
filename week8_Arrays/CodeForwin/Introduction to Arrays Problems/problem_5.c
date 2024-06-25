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
    int max_num = arr[0];
    int sec_max_num;
    for (int i = 0; i < n; i++)
    {
        if(max_num < arr[i])
        {
            sec_max_num = max_num;
            max_num = arr[i];
        }
    }
    printf("Largest element: %d\n",max_num);
    printf("Second largest element: %d\n",sec_max_num);
    
    

     
    return 0;
}
