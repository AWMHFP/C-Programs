#include<stdio.h>
#include<math.h>
int main(){
    int i,j;
    for (i=1;i<=5;i++){
        for(j=1;j<=(5-i);j++){
            printf("\t");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("%d\t",i);
        }
        printf("\n");
    }
}