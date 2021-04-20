#include <stdio.h>

int c=1,b,i,j,a,gcd,count=0;
void main(){
    scanf("%d %d",&a,&b);
    if (a<=b && a>=1 && a<=1000 && b>=1 && b<=1000){
        for (i=a;i<=b;i++){
            for (j=a;j<=b;j++){
                if (j>=i){
                    for(c=1;c<i+1;c++){
                        if (i%c==0 && j%c==0){
                            gcd=c;
                        }
                    }
                    if (gcd>1){
                        count+=1;
                    }
                } 
            }
        }
        printf("%d",count);
    }
    else{
        printf("Invalid Input");
    }
}