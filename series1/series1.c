// Program to calculate the sum of the series: x^1/1! + x^3/3! + x^5/5! + ... up to n terms
#include <stdio.h>
#include <math.h>
int main(){
    int i,j,n,f;
    float x,sum;
    printf("Enter the number of terms and value of x:\t");
    scanf("%d%f",&n,&x);
    sum = 0;
    for (i=1; i<=n; i++){
        f = 1;
        for(j=1; j<=(2*i-1); j++){
            f = f*j;
        }
        sum = sum + pow(x, (2*i-1))/f;
    }
    printf("Sum of the series is:\t%f\n", sum);
    return 0;
}