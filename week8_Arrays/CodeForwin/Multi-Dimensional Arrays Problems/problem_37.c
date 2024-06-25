#include<stdio.h>
#define MAX_SIZE 100
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
    if(r==2&&c==2)
    {
        int det = arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0];
        printf("|Array| = %d",det);
    }    
    else if(r==3 && c==3)
    {
        int det = arr[0][0]*(arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1])-arr[0][1]*(arr[1][0]*arr[2][2] - arr[1][2]*arr[2][0]) + arr[0][2]*(arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0]);
        printf("|Array| = %d", det);
        
    }
    
    return 0;
}
