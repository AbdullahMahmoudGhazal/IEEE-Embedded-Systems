#include<stdio.h>
int fact(int num);
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter your num: ");
    scanf("%d",&num);
    printf("%d! = %d",num,fact(num));

    return 0;
}
int fact(int num)
{
    if(num <=0)
        {
            printf("Error!!\n");
            return -1;
        }    
    else if(num > 1)
        {
         return (num*fact(num-1));

        }
    

}

