#include<stdio.h>
void main(){
    int arr[100][100];
    int r1,c1;
    printf("Enter 3*3 matrix or 2*2 matrix: \n");
    printf("enter row and column of matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("enter elements of matrix: ");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr[i][j]);
        }
    } 
    int determinant=0;
    if(r1==3 && c1==3){
      determinant=arr[0][0]*(arr[1][1]*arr[2][2]-arr[1][2]*arr[2][1])-arr[0][1]*(arr[1][0]*arr[2][2]-arr[2][0]*arr[1][2])+arr[0][2]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][1]);
      printf("Determinant is : %d",determinant);
    }else if(r1==2 && c1==2){
        determinant=arr[0][0]*arr[1][1]-arr[1][0]*arr[0][1];
    }else printf("Enter correct order matrix");
   
          }
