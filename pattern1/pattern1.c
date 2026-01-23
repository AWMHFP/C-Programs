// To print the pattern 1 12 123 1234 12345
#include<stdio.h>
#include<math.h>
int main(){
    int i,s=0;
    for (i=1;i<=5;i++){
        s = s*10+i;
        printf("%d\n",s);
    }
    return 0;
}