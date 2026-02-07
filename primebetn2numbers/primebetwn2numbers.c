#include<stdio.h>
void check (int a, int b);
int main(){
    int a1,b1;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a1,&b1);
    check (a1,b1);
    return 0;
}
void check(int a, int b){
    int i,j,s,temp;
if(a>b){
    temp = a;
    a = b;
    b = temp;
}
    printf("The prime number between %d and %d\t",a,b);
    for(i=a+1;i<b;i++){
        s = 0;
        for(j=1;j<=i/2;j++){
            if(i%j==0){
                s = s + 1;
            }
        }
        if(s==1){
            printf("%d\t",i);
        }
    }
}