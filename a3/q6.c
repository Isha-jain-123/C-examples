#include <stdio.h>
#include <math.h>

int i,j,n,k=0;
void main(){
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		int sum=0,c=i,d=i,count=1;
		while (c/10!=0){
			count+=1;
			c/=10;
		}
		while (d/10>=0){
			sum+=pow(d%10,count);
			d/=10;
			if (d/10==0){
				sum+=pow(d,count);
				break;
			}
		}
		if (sum==i){
			printf("%d ",i);
		}	
	}	
}
