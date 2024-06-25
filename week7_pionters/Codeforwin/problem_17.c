#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    int arr[SIZE];
    printf("Enter the size: ");
    int n;
    scanf("%d",&n);
    int *ptr = arr;

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&(*(ptr+i)));
    }

    printf("Befor Sorting: [");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("]\n");
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(*(ptr+j) < *(ptr + i))
            {
                temp = *(ptr+j);
                *(ptr + j) = *(ptr + i);
                *(ptr + i) = temp;
            }
        }                
    }
    
    printf("After Ascending Sorting: [");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("]\n");
    
       for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(*(ptr+j) > *(ptr + i))
            {
                temp = *(ptr+j);
                *(ptr + j) = *(ptr + i);
                *(ptr + i) = temp;
            }
        }                
    }
    
    printf("After Descinding Sorting: [");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("]\n");
    

    
    return 0;
}
