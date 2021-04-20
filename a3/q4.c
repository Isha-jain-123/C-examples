#include <stdio.h>
#include <math.h>

double x,a1=1,a2=1,a3=1,nth,sum=0,i=0,j=1;
void main(){
	scanf("%lf",&x);
	x=(x*3.14)/180;
	if (x>=0 && x<=180){
		while (i<7){					
			a1=pow(-1,i);		  //  a1= (-1)^n
			a2=pow(x*x,i);		  //  a2=  x^2n	
			while (j<=2*i){       //  a3= (2n)!       
				if (i==0){
					a3=1;
				}
				else{
					a3*=j;
				}
				j++;
			}
		nth=(a1*a2)/a3;			 //  nth (nth term) = ((-1)^n * x^2n)/(2n)!	
		sum+=nth;
		i++;
		}
		printf("%.3lf",sum);
	}
	else{
		printf("Invalid input");
	}
}
