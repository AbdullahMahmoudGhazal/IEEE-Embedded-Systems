#include <stdio.h>

#define MAX_SIZE 1000

int main(int argc, char const *argv[]) {
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];
    int arr3[MAX_SIZE]; // Array to store the merged elements
    int n, m, i1 = 0, i2 = 0, i3 = 0;

    printf("Enter number of elements of 1st array: ");
    scanf("%d", &n);

    printf("Enter your elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements of 2nd array: ");
    scanf("%d", &m);

    printf("Enter your elements: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the two sorted arrays
    while (i1 < n && i2 < m) {
        if (arr1[i1] < arr2[i2]) {
            arr3[i3] = arr1[i1];
            i1++;
        } else {
            arr3[i3] = arr2[i2];
            i2++;
        }
        i3++;
    }

    while (i1 < n) {
        arr3[i3] = arr1[i1];
        i1++;
        i3++;
    }
    while (i2 < m) {
        arr3[i3] = arr2[i2];
        i2++;
        i3++;
    }

    printf("Your merged Array is: {");
    for (int i = 0; i < n + m; i++) {
        printf("%d, ", arr3[i]);
    }
    printf("}\n");

    return 0;
}
