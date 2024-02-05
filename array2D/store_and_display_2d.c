#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    int arr[m][n];
    printf("Enter elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d] --> ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Array in row-major order:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
    }
    return 0;
}
