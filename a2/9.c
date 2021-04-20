#include <stdio.h>

double n,i=1;
void main(){
    scanf("%d",&n);
    if ((int)n!=n){
        printf("Invalid input , please enter an integer\n");
    }
    else{
        for (i=1;i<11;i++){
        printf("%d x %d = %d\n",n,i,n*i);
        } 
    }
}