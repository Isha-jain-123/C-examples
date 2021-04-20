#include <stdio.h>

int n,sum=0;
void main(){
    scanf("%d",&n);
    for (int i=1;i<n;i++){
        if (n%i==0){
            sum+=i;
        }
    }
    if (sum==n){
        printf("Perfect");
    }
    else{
        printf("Not Perfect");
    }
}