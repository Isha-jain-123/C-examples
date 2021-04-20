#include <stdio.h>

int n,i=1;
double a,d;
void main(){
	scanf("%d",&n);
	scanf("%lf",&a);
	scanf("%lf",&d);
	while (i<=n){
		printf("%.1lf ",a+(i-1)*d);
		i++;
	}
}
