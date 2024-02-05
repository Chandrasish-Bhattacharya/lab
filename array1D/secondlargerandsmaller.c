#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter the %d element: ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int temp;
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
printf("the second smallest element is %d\n",a[n-2]);
printf("the second largest element is %d\n",a[1]);
return 0;
}
