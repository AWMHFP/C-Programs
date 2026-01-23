//To print the pattern 5 54 543 5432 54321
#include<stdio.h>
#include<math.h>
int main(){
    int i,s=0;
    for(i=5;i>=1;i--){
        s = s*10 + i;
        printf("%d\n",s);
    }
    return 0;
}