#include <stdio.h>

int n,a=0,b=1,i=0,nth,c;
void main(){
    scanf("%d",&n);
    if (n<0){                  // invalid (negative) user input
        printf("Invalid Input");
    }
    else if (n==0){
        printf("%d",a);
    }
    else if (n==1){           // if user input is 1 
        printf("%d",b); 
    }
    else{
        while (i<n+1){       
            nth=a;
            c=a+b;            // f(n-1) + f(n-2)
            a=b;
            b=c;
            i++;
        }
        printf("%d",nth); 
    }
}
