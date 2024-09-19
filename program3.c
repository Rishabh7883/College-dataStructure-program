#include<stdio.h>
void main(){
    int arr[100][100],brr[100][100],mul[100][100];
    int r1,c1,r2,c2;
    printf("enter row and column of first array: ");
    scanf("%d%d",&r1,&c1);
    printf("enter elements of first array: ");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter row and column of second array: ");
    scanf("%d%d",&r2,&c2);
    printf("enter elements of second array: ");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    
        if(c1==r2){
          for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            mul[i][j]=0;
           for(int k=0;k<r2;k++){
          mul[i][j]+=arr[i][k]*brr[k][j];
           }
        }
    }
    printf("Multiplication of array is:\n");
     for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
          printf("%d ",mul[i][j]);
        }printf("\n");
    }
    }else printf("Row and Column are incorrect");

}