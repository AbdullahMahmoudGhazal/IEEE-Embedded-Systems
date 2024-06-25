#include<stdio.h>
#define MAX_SIZE 100
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
    int flag = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr1[i][j] != arr1[j][i])
            {
                flag = 0;
            }
            
        }        
    }


    //-------------------------------
    if(flag)
    {
        printf("Symmetric ^_^\n");
    }
    else
    {
        printf("Not Symmetric ;_;\n");
    }
    return 0;
}
