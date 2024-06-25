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

    int x,pos;
    printf("Enter new element: ");
    scanf("%d",&x);
    printf("Enter position: ");
    scanf("%d",&pos);

    printf("Your Array is: {");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("}\n");

    if(!(pos >= 0 && pos <= n))
    {
        printf("INVALID POSITION !!!");
    }
    else
    {
        //shift right
        for (int i = n; i >= pos; i--)
        {
            arr[i] = arr[i-1];
        }
        
    }
    arr[pos-1] = x;
    n++;

    printf("Your New Array is: {");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("}\n");

     
    return 0;
}
