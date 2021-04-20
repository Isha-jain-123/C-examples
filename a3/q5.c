#include <stdio.h>

// method 1
int c,n,i,b,sum=0;
void main(){
    for (i=100/17; i<999/17 +1;i++){
        b=i*17;
        if (b>100 && b<999){
            printf("%d\n",b);
            sum+=b;
        }
    }
    printf("%d\n",sum);
}

// method 2

int i,j,b,sum=0;
void main(){
	for (i=100;i<=999;i++){
        for (j=1;j<(i/17)+1;j++){
            b=i-17*j;
            if (b==0){
                sum+=i;
            }
        }
    }
    printf("%d",sum); 
}