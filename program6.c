#include<stdio.h>
void main(){
    int arr[100][100];
    int r1,c1;
    printf("enter row and column of array: ");
    scanf("%d%d",&r1,&c1);
    printf("enter elements of first array: ");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr[i][j]);
        }
    } 
    int max=0;
          for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
           if(((i+j)>=max && r1<c1 ) || ((i+j)>max || i>c1-1 || j>r1-1)){
            max=i+j;
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
          }
    printf("Transpose of array is:\n");
     for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
          printf("%d ",arr[i][j]);
        }printf("\n");
    }

}