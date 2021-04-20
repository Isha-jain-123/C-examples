#include <stdio.h>

int i,j,n,f=0,num;
void main(){
    scanf("%d",&n);
    if (n>0 && n<=1000){
        for (i=1;i<n+1;i++){
            int sum=0,c=i;
            while (c/10!=0){
                sum+=c%10;              // sumD(x)
                c=c/10;
            }
            num=0;
            for (j=1;j<i+1;j++){
                if (j%(sum+c)==0){
                    num+=1;             // numD(x)
                }
            }
            f+=num;                     // F(n)
        }
        printf("%d",f);
    }
    else{
        printf("Invalid Input");
    }
}