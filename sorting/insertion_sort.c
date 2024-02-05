// Write a C program for implementing insertion sort
#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int arr[n], key, j;
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d -->", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && key<=arr[j])
        {
            arr[j + 1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
    printf("Array after sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d --> %d\n", i, arr[i]);
    }
}