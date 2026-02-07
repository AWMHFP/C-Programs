#include<stdio.h>
int main(){
    int mat[4][3],i,j,max;
    printf("Enter the elements of matrix (4x3):\n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    max = mat[0][0];
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            if(mat[i][j]>max){
                max=mat[i][j];
            }
        }
    }
    printf("The maximum element is %d:",max);
    return 0;
}