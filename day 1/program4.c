#include<stdio.h>
void main(){
    int arr[100];
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int e;
    printf("enter the element which are deleted: ");
    scanf("%d",&e);
    int idx;
    for(int i=0;i<n;i++){
        if(arr[i]==e){
            idx=i;
            break;
        }
    }
    for(int i=idx;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    printf("array elements are: ");
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    
}