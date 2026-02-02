#include<stdio.h>
#include<math.h>
int hcf (int a, int b);
int main(){
    int a1,b1,hcf1;
    printf("Enter 1st and 2nd number:\n");
    scanf("%d %d",&a1,&b1);
    hcf1 = hcf(a1,b1);
    printf("The HCF is:%d",hcf1);
    return 0;
}
int hcf (int a, int b){
    int r;
    r = a % b;
    if (r == 0){
        return b;
    }
    else{
        return (hcf(b, r));
    }
}