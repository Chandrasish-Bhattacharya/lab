//Write a C program for implementing bubble sort.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n],temp;
    printf("Enter elements:\n");
    for (int i = 0; i< n; i++)
    {
        printf("Element %d -->",i);
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Array after sorting : \n");
    for (int i = 0; i< n; i++)
    {
        printf("%d --> %d\n",i,arr[i]);
    }
}