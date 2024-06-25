#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    printf("Enter nomber of elements: ");
    scanf("%d",&n);
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    if(arr == NULL)
    {
        printf("FAILED!!\n");
    }
    else
    {
        printf("Enter the elements: ");
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
        
    }
    free(arr);
    return 0;
}
