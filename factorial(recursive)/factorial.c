#include<stdio.h>
int fact(int n);
int main()
{
    int n1, fact1;
    printf("Enter any number:\n");
    scanf("%d",&n1);
    fact1 = fact(n1);
    printf("The factorial is: %d",fact1);
    return 0;
}
int fact(int n)
{
    if (n==0 || n==1){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}