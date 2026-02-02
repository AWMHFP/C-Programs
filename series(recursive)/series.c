// x^1+x^2+x^3+x^4+x^5+....+ n-terms.
#include<stdio.h>
#include<math.h>
int series(int x, int n);
int main( ){
    int x1,n1,sum;
    printf("Enter value of x and n:\n");
    scanf("%d %d",&x1,&n1);
    sum = series(x1,n1);
    printf("The sum is : %d",sum);
    return 0;
}
int series(int x, int n){
    if (n==0){
        return 0;
    }
    else{
        return (pow(x,n)+series(x,n-1));
    }
}
