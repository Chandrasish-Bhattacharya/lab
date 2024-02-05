#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n], i;
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d --> ", i);
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, n);
    printf("Array after sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d --> %d\n", i, arr[i]);
    }
    return 0;
}
