#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double D;
    D=pow(b,2)-(4*a*c);
    if (a==0){                              
        printf("Not a Quadratic equation");
    }
    else if (D>0){               //real and unique roots
        double r1,r2;
        r1=(-b+pow(D,0.5))/(2*a);
        r2=(-b-pow(D,0.5))/(2*a);
        printf("%.3lf %.3lf",r1,r2);
    } 
    else if (D==0){             //real and repeated root
        printf("%.3lf",(-b/2*a));
    }
    else if (D<0){              //no real roots
        printf("No real roots");
    }
    return 0;
}