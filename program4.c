#include<stdio.h>
void main(){
    int arr[100][100],trans[100][100];
    int r1,c1;
    printf("enter row and column of array: ");
    scanf("%d%d",&r1,&c1);
    printf("enter elements of first array: ");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr[i][j]);
        }
    } 
          for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            trans[i][j]=arr[j][i];
        }
    }
    printf("Transpose of array is:\n");
     for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
          printf("%d ",trans[i][j]);
        }printf("\n");
    }

}