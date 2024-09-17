 #include<stdio.h>
 void main(){
 int arr[100];
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the sorted elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element which is insert: ");
    int e;
    scanf("%d",&e);
    int idx;
    for(int i=0;i<=n;i++){
        if(arr[i]<e){
           idx=i+1;
        }
    }
    for(int i=n;i>=idx;i--){
        if(i==idx) arr[i]=e;
       else   arr[i]=arr[i-1];
    }
    printf("array elements are: ");
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
 }