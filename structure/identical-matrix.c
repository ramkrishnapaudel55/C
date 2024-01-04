#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d%d", &m, &n);
    int matrix1[m][n], matrix2[m][n];
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    // compare the matrices
    int equal = 1;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                equal = 0;
                break;
            }
        }
        if (equal == 0) {
            break;
        }
    }
    if (equal == 1) {
        printf("The matrices are identical.\n");
    } else {
        printf("The matrices are not identical.\n");
    }
    return 0;
}
