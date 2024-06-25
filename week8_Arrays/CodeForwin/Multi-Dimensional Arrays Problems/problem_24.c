#include<stdio.h>
#define MAX_SIZE 1000
int main(int argc, char const *argv[])
{
    int arr1[MAX_SIZE][MAX_SIZE];
    int arr2[MAX_SIZE][MAX_SIZE];
    int r,c;

    printf("Enter no of Rows: ");
    scanf("%d",&r);
    printf("Enter no of Cols: ");
    scanf("%d",&c);

    printf("Fill your 1st matrix ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {   
            scanf("%d",&arr1[i][j]);
        }
        
    }

    printf("Fill your 2nd matrix ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        
    }


    //-------------------------------
    printf("arr3 = [");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d, ",(arr1[i][j] - arr2[i][j]) );
        }
        printf("\n");
    }
    printf("]\n");
    return 0;
}
