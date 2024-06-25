#include<stdio.h>
#define MAX_SIZE 1000
int main(int argc, char const *argv[])
{
    int a[MAX_SIZE];
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter your elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for(int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i] > a[j])
            {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
        }
        
    }
    printf("Your Array is: {");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",a[i]);
    }
    printf("}\n");
    

     
    return 0;
}
