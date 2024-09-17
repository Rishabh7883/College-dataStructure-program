#include<stdio.h>
int setDifference(int arr[],int b[],int c[],int n1,int n2){
 int u=0,v=0;
    int k=0;
    while(u<n1){
       if(arr[u]==b[v]){
       u++;
       v++;
       }else if(arr[u]>b[v]) v++;
       else c[k++]=arr[u++];
    }
    return k;
}
void main(){
    int arr[100],b[100],c[100];
    int n1,n2;
    printf("enter the size of array1: ");
    scanf("%d",&n1);
    printf("enter the elements of array: ");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the size of array2: ");
    scanf("%d",&n2);
    printf("enter the elements of array: ");
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
  int k=setDifference(arr,b,c,n1,n2);
      printf("array elements are: ");
    for(int i=0;i<k;i++){
        printf("%d ",c[i]);
    }
}