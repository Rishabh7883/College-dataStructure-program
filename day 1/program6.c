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
    int check=0;
    for(int i=0;i<n-1;i++){
        if((arr[i]+1)!=arr[i+1]){
            check=1;
            printf("missing no is: %d\n",arr[i]+1);
            break;
        }
    }
    if(check==0) printf("all no are present\n");
    printf("array elements are: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}