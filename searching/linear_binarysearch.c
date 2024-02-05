
#include<stdio.h>
int linearsearch(int arr[],int n,int key1){
    for(int i=0;i<n;i++){
        if(arr[i]==key1){
            return i;
        }
    }    
    return -1;
}
int binarysearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        int temp;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid =(high+low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
       
    }
         return -1;
}
int main(){
    int n;
    printf("enter the number of element in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    printf("Enter the %d element: ",i+1);
    scanf("%d",&arr[i]);
    }
int key1;
printf("enter the key you want to search using linear search: ");
scanf("%d",&key1);
int index_linear = linearsearch(arr,n,key1);
if(index_linear!=-1){
    printf("Usung linear search:key %d founde at index %d.\n",key1,index_linear);
}else{
    printf("using linear search:key %d not found in the array,\n",key1);
}

int key2;
printf("enter the key you want to bineary search: ");
scanf("%d",&key2);
int index_binary = binarysearch(arr,n,key2);
if(index_binary!=-1){
    printf("using bineary search: key%d found found at index %d.\n",key2,index_binary);
}else{
    printf("using bineary search:key%d not found in the array.\n",key2);
}
return 0;
}

