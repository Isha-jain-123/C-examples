#include <stdio.h>

int n,i,j;
void main(){
    scanf("%d",&n);
    if (n>0){
        for (i=1;i<n+1;i++){
            for (j=n-i+1;j>0;j--){
                printf("%d ",j);
            }
            printf("\n");
        }
    }
    else{
        printf("Invalid Input");
    }
}