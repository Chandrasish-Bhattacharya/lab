#include<stdio.h>
#include<conio.h>
int main(){
    int arr[100],i,j,k,size;
    printf("Define the number of element in an array: ");
    scanf("%d",&size);
    for(i=0;i<=size-1;i++){
    printf("Enter the %d elemnet ",i+1);
    scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<size-1;k++){
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    printf("\nArray element after deletion of the duplicate element: ");
    for(i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
