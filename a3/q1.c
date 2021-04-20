#include <stdio.h>

void main(){ 
    int a,b,reverse=0;
    scanf("%d",&a);
    int c=a;
    if (a>=0){
        while (a>0){
            b=a%10;
            reverse=reverse*10 + b;
            a=a/10;
        }
        if (reverse==c){
            printf("Palindrome");
        }
        else{
            printf("Not Palindrome");
        }
    }
    else{
        printf("Not Palindrome");
    }
}