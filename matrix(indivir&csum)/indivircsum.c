#include<stdio.h>
int main(){
    int mat[100][100],r,c,rs[100],cs[100],i,j;
    printf("Enter no of rows and columns of a matrix:\n");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            rs[i] = rs[i] + mat[i][j];
            }
        }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            cs[i] = cs[i] + mat[j][i];
        }
    }
    for(i=0;i<r;i++){
        printf("The sum of %d row elements is: %d\n",i+1,rs[i]);
    }
    for(i=0;i<c;i++){
        printf("The sum of %d column elements is: %d\n",i+1,cs[i]);
    }
    return 0;
}