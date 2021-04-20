#include <stdio.h>

void main(){
    int i=1,x,n,prod;
    scanf("%d %d",&x,&n);
    if (n!=0){
        prod=x;
        if (n>=0){
            while (i<n){                // positive power
            prod*=x;
            i++;
            }
        printf ("%d",prod);
        }
        else{
            while (i<-n){              // negative power
            prod*=x;
            i++;
            }
        printf("%f",1/((float)prod));
        }
    }
    else if(n==0 && x!=0){            // when power is 0
        printf("1");
    }
    else if(n==0 && x==0){            // if both x,n=0
        printf("Undefined");
    }
}