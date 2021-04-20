#include <stdio.h>

int a,b,i,j,count=0;
void main(){
    scanf("%d %d",&a,&b);
    if (a>0 && a<=1000 && b>0 && b<=1000 && b>=a){
        for (i=a;i<=b;i++){
            for (j=a;j<=b;j++){
                if (j>=i && j%i==0 ){
                    count+=1;
                }
            }
        }
        printf("%d",count);
    }
    else{
        printf("Invalid Input");
    }
    
}