#include<stdio.h>
#define MAX_SIZE 1000
int main(int argc, char const *argv[])
{
    int arr[MAX_SIZE];
    int freq[MAX_SIZE] = {0};
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter your elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int cntr = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                cntr++;
                break;
            }
        }
    }


    printf("Number of duplicate elements = %d",cntr);
    
    

     
    return 0;
}

