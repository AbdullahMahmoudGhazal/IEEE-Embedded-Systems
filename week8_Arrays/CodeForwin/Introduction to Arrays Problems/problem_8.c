#include<stdio.h>
#define MAX_SIZE 1000
int main(int argc, char const *argv[])
{
    int arr_src[MAX_SIZE];
    int arr_dist[MAX_SIZE];

    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter your elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr_src[i]);
    }

    for (int i = 0; i < n; i++)
    {
        arr_dist[i] = arr_src[i];
    }
    printf("Your Source Array is: {");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",arr_src[i]);
    }
    printf("}\n");

    printf("Your Distenation Array is: {");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",arr_dist[i]);
    }
    printf("}\n");


    
    

     
    return 0;
}
