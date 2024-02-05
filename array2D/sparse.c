#include <stdio.h>
#define MAX 100

void convertTo3Tuple(int arr[][MAX], int m, int n) {
    int i, j, k = 0, count = 0;
    int sparseMatrix[MAX][3];

    // Count the number of zeros in the matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (arr[i][j] == 0) {
                count++;
            }
        }
    }

    // Check if the matrix is sparse
    if (count > (m * n) / 2) {
        printf("The matrix is sparse.\n");

        // Convert the matrix to 3-tuple format
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                if (arr[i][j] != 0) {
                    sparseMatrix[k][0] = i;
                    sparseMatrix[k][1] = j;
                    sparseMatrix[k][2] = arr[i][j];
                    k++;
                }
            }
        }

        // Print the 3-tuple format
        printf("The matrix in 3-tuple format is:\n");
        for (i = 0; i < k; i++) {
            printf("(%d, %d, %d)\n", sparseMatrix[i][0], sparseMatrix[i][1], sparseMatrix[i][2]);
        }
    } else {
        printf("The matrix is not sparse.\n");
    }
}

int main() {
    int arr[MAX][MAX], m, n, i, j;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    convertTo3Tuple(arr, m, n);

    return 0;
}
