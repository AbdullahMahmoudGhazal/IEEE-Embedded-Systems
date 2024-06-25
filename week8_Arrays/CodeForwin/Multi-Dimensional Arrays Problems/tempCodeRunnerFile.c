#include<stdio.h>
#define MAX_SIZE 1000
int main(int argc, char const *argv[])
{
    int arr[MAX_SIZE][MAX_SIZE];
    int r,c;

    printf("Enter no of Rows: ");
    scanf("%d",&r);
    printf("Enter no of Cols: ");
    scanf("%d",&c);

    printf("Fill your matrix ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {   
            scanf("%d",&arr[i][j]);
        }
        
    }

    //-------------------------------
    int row_cntr = 0;
    int col_cntr = 0;
    printf("Rows: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            row_cntr = 0;
           row_cntr+=arr[i][j]; 
        }
        printf("ROW[%d] = %d\n",i,row_cntr);
    }
    
    return 0;
}
