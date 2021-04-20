#include <stdio.h>

int n,i,j;
void main(){
    scanf("%d",&n);
    for (i=1;i<n+1;i++){
        for (j=1;j<i;j++){
            printf(" ");
        }
        for (j=1;j<=i;j++){
            printf("#");
        }
        for (j=1;j<=4*(n-i);j++){
            printf(" ");
        }
        for (j=1;j<=i;j++){
            printf("#");
        }
        printf("\n");
    }
    for (i=n;i>0;i--){
        for (j=1;j<i;j++){
            printf(" ");
        }
        for (j=1;j<=i;j++){
            printf("#");
        }
        for (j=1;j<=4*(n-i);j++){
            printf(" ");
        }
        for (j=1;j<=i;j++){
            printf("#");
        }
        printf("\n");
    }
}