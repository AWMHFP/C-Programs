// To transpose a give matrix of order m x n.
#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,j;
    int mat[10][10];
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
    
        }
    }
    printf("The matrix before transpoe is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the matrix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",mat[j][i]);
        }
        printf("\n");
        printf("\n");
    }
    return 0;
}
