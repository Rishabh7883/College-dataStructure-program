#include<stdio.h>
void main(){
    int arr[100],dup[50],notdup[50];
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if((arr[i])==arr[i+1]){
         dup[a++]=arr[i++];
        }
        else if(i==n){
            notdup[b++]=arr[i];
        }
        else notdup[b++]=arr[i];
    }
    printf("duplicate elements are : ");
        for(int i=0;i<a;i++){
        printf("%d ",dup[i]);
    }
    printf("\nnot duplicate elements are : ");
    for(int i=0;i<b;i++){
        printf("%d ",notdup[i]);
    }
}