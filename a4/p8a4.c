# include <stdio.h>
# include <math.h>

int a,i,j,c,n,count=0;
void main(){
    scanf("%d",&n);
    if (n>0 && n<=100){
        for (a=1;a<=n;a++){
            int count_a=0;
            for (i=0;i<=sqrt(a);i++){
                for (j=0;j<=sqrt(a);j++){
                    c=pow(i,2)+pow(j,2);
                    if (j>=i && c<=n && c!=0 && c==a){
                        count_a+=1;
                    }
                }
                if (count_a==1){
                    count+=1;
                    break;
                }
            }
        }
        printf("%d\n",count);
    }
    else{
        printf("Invalid Input");
    }
}