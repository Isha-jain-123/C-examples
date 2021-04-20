#include <stdio.h>

void main(){
    int num,i;
    scanf("%d",&num);
    for (i=2;i<num+1;++i){
        if (num%i==0){
            printf("It is not a prime");
            break;
        }
        else{
            printf("It is a prime");
            break;
        }
    }
}