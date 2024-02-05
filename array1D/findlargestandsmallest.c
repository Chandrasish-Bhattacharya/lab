#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    
    for (int i=0;i<n;i++){
        printf("enter %d element in the array:",i+1);
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int smallest =arr[0];
    for (int i=1;i<n;i++){
        if(arr[i]>largest){
        largest =arr[i];
    }
    if(arr[i]<smallest){
        smallest=arr[i];
    }}
printf("enter the largest element in the array is:%d\n",largest);
printf("the smallest element in the array is:%d\n",smallest);

}
