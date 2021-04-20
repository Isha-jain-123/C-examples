#include <stdio.h>

int n,factorial=1;
void main(){
    scanf("%d",&n);
    while (n>1){
        factorial*=n;
        n--;
    }
    printf("%d",factorial);
}