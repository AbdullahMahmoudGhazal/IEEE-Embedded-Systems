#include <stdio.h>
#define ROW 3
#define COL 3

void read_mat(int mat[ROW][COL]);
void write_mat(int mat[ROW][COL]);
void product_2_mat(int mat1[ROW][COL], int mat2[ROW][COL], int res[ROW][COL]);

int main(int argc, char const *argv[]) {
    int mat1[ROW][COL];
    int mat2[ROW][COL];

    printf("Enter elements of 1st Matrix: ");
    read_mat(mat1);
    printf("Enter elements of 2nd Matrix: ");
    read_mat(mat2);

    int product[ROW][COL];
    product_2_mat(mat1, mat2, product);

    printf("[mat1] X [mat2] = ");
    write_mat(product);

    return 0;
}

void read_mat(int mat[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            scanf("%d", (*(mat + i) + j));
        }
    }
}

void write_mat(int mat[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d, ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

void product_2_mat(int mat1[ROW][COL], int mat2[ROW][COL], int res[ROW][COL]) {
    int sum;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            sum = 0;
            for (int k = 0; k < COL; k++) {
                sum += *(*(mat1 + i) + k) * *(*(mat2 + k) + j);
            }
            *(*(res + i) + j) = sum;
        }
    }
}