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
    printf("array elements are: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}