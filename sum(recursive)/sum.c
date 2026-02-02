#include<stdio.h>
int sum(int n);
int main()
{
    int n1, s1;
    printf("Enter the number of terms:\n");
    scanf("%d",&n1);
    s1 = sum(n1);
    printf("The sum is: %d \n",s1);
    return 0;
}
//recursive function.
int sum(int n)
{
    if (n==0){
        return 0;
    }
    else{
        return (n + sum(n-1));
    }
}