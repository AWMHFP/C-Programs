// find sum 1+11+111+1111+11111 ... upto n-terms
#include<stdio.h>
int sum(int n);
int main(){
    int n1,sum1;
    printf("Enter number of terms:\n");
    scanf("%d",&n1);
    sum1 = sum(n1);
    printf("%d",sum1);
    return 0;
}
int sum(int n){
    int i,s=0;
    if (n==0){
        return 0;
    }
    else if(n==1){
        return 1;        
    }
    else{
        for(i=1;i<=n;i++){
            s = s*10 + 1;
        }
        return (s + sum(n-1));
    }
}
