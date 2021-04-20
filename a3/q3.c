#include <stdio.h>

int n,i=1;
double sum=0;
void main(){
	scanf("%d",&n);
	if (n>0){
		while (i<=n){
			double a;
			scanf("%lf",&a);
			sum+=a;
			i++;	
		}
		printf("%lf",sum);
	}
	else{
		printf("Invalid input");
	}	
}
