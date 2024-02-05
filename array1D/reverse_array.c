#include <stdio.h>
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
    
    printf("Array after reversing:\n");
    for (i = n-1; i >=0 ; i--) {
        printf("%d",arr[i]);
    }
    return 0;
}
