#include<stdio.h>
void initialize(int *a);
int main(int argc, char const *argv[])
{
    int arr[3];
    initialize(arr);
    printf("[%d, %d, %d]",arr[0],arr[1],arr[2]);


    return 0;
}

void initialize(int *a)
{
    *a = 10;
    *(a+1) = 20;
    *(a+2) = 30;

}
