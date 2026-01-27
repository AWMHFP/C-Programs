//to reverse a string without using strrev function
#include<stdio.h>
int main(){
    char str[100], rev[100];
    int i, len=1;
    printf("Enter a string: ");
    scanf("%s", &str);
    for (i=1; str[i] != '\0'; i++){
        len = len + 1;
    }
    for(i=0;i<len;i++){
        rev[i] = str[len -1 -i];
    }
    rev[len] = '\0';
    printf("The reversed string is: %s\n", rev);
    return 0;
}