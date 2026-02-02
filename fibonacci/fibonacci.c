#include<stdio.h>
int fib (int n);
int main(){
    int n1, fib1;
    printf("Enter no of terms:\n");
    scanf("%d",&n1);
    fib1 = fib(n1);
    printf("%d",fib1);
    return 0;
}
int fib (int n){
    if (n==0){
        return 0;
    }
    else if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return (fib(n-1) + fib(n-2));
    }
}