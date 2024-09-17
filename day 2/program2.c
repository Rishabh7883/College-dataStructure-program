/*#include<stdio.h>
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
    int u=0,v=0;
    int k=0;
    while(u<n1 || v<n2){
        if(arr[u]>b[v]){
              if(v!=0 && c[k-1]!=b[v]) c[k++]=b[v++];
               else if(v==0 && u==0) c[k++]=b[v++];
               else v++;
        }else {
          if(u!=0 && c[k-1]!=arr[u])  c[k++]=arr[u++];
          else if(u==0 && v==0)  c[k++]=arr[u++];
          else u++;
        }
    }
    printf("array elements are: ");
    for(int i=0;i<k;i++){
        printf("%d ",c[i]);
    }
}*/
#include<stdio.h>
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
    int u=0,v=0;
    int k=0;
    while(u<n1 || v<n2){
       if(arr[u]==b[v]){
        c[k++]=arr[u++];
        v++;
       }else if(arr[u]>b[v]) c[k++]=b[v++];
       else  c[k++]=arr[u++];
    }
    printf("array elements are: ");
    for(int i=0;i<k;i++){
        printf("%d ",c[i]);
    }
}