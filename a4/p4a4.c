#include <stdio.h>
#include <math.h>

int n,count=0,i=2,j,a;
void main(){
    scanf("%d",&n);
    if (n>0){
        while (i>0){
            a=0;
            for (j=2;j<i;j++){
                if (i%j==0){
                    a++;
                }
            }
            if (a==0){
                count+=1;
                printf("%d ",i);
                if (count%n==0){
                    printf("\n");
                }
            }
            if (count==pow(n,2)){
                break;
            }
            i++;
        }
    }
    else{
        printf("Invalid Input");
    }
}