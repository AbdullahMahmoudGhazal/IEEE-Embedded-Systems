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

    int *ptr = a;
    printf("Enter your element to search: ");
    int num;
    scanf("%d",&num);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if(*(ptr+i) == num)
        {
            flag = 1;
            printf("the element %d is exist at index: %d\n",num,i+1);
            break;
        }
    }
    if(flag==0)
    {
        printf("element Doesn't Exist\n");
    }
    
    
    //====================================================



    return 0;
}
