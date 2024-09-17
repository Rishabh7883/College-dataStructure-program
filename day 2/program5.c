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
int unionOfArr(int x[],int y[],int ans[], int k1,int k2){
    int g=0,h=0;
    int n=0;
    while(g<k1 && h<k2){
        if(x[g]==y[h]){
            ans[n++]=x[g++];
            h++;
        }else if(x[g]>y[h]){
            ans[n++]=y[h++];
        }else ans[n++]=x[g++];
    }
    for(int i=g;i<k1;i++){
        ans[n++]=x[i];
    }
    for(int i=h;i<k2;i++){
        ans[n++]=y[i];
    }
   return n;
}
void main(){
    int arr[100],b[100],c[100],d[100],ans[100];
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
   int l=setDifference(b,arr,d,n2,n1);
   int m=unionOfArr(c,d,ans,k,l);
 printf("array elements are: ");
    for(int i=0;i<m;i++){
        printf("%d ",ans[i]);
    }
}