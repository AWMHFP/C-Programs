//To multiply matrices of order r x c and b x f.
#include<stdio.h>
int main(){
    int i,j,r,c,b,f,k;
    int mat1[10][10], mat2[10][10],mul[10][10],s;
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d%d",&r,&c);
    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d%d",&b,&f);
    if (c!=b)
    {
        printf("Matrix Multiplication is not possible.");
    }
    else{
        printf("Enter the elments of first matrix:\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("Enter the elements of second matrix:\n");
        for(i=0;i<b;i++)
        {
            for(j=0;j<f;j++)
            {   
                scanf("%d",&mat2[i][j]);
            }
        }
        printf("The matrices before multiplications are:\n");
        printf("Matrix 1:\n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("%d\t",mat1[i][j]);
            }
            printf("\n");
        }
        printf("Matrix 2:\n");
        for(i=0;i<b;i++){
            for(j=0;j<f;j++){
                printf("%d\t",mat2[i][j]);
            }
            printf("\n");
        }
        for(k=0;k<r;k++){
            for(i=0;i<f;i++){
                s = 0;
                for(j=0;j<c;j++){
                    s = s + mat1[k][j]*mat2[j][i];
                }
                mul[k][i] = s;
            }
        }
        printf("The matrix multiplication of two matrices is: \n");
        for(i=0;i<r;i++){
            for(j=0;j<f;j++){
                printf("%d\t",mul[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}